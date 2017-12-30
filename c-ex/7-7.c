#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct grades {
    float english;
    float math;
    float physics;
    float c;
};
struct s_list{
    int id;
    char name[100];
    struct grades grade;
    struct s_list *next;
    struct s_list *prior;
} ;
struct s_list * create_list(struct s_list *headp)
{
    struct s_list * head=NULL,*tail, *t;
    int id;
    char name[100];
    float english, math, physics, c;
    scanf("%d%s%f%f%f%f",&id, name, &english, &math, &physics, &c);
    head=(struct s_list *)malloc(sizeof(struct s_list));
    head->id = id;
    strcpy(head->name, name);
    head->grade.english = english;
    head->grade.math = math;
    head->grade.physics = physics;
    head->grade.c = c;
    head->prior = NULL;
    tail=head;
    while (scanf("%d",&id), id > 0) {
        scanf("%s%f%f%f%f", name, &english, &math, &physics, &c);
        tail->next = (struct s_list *)malloc(sizeof(struct s_list));
        t = tail;
        tail = tail->next;
        tail->prior = t;
        tail->id = id;
        strcpy(tail->name, name);
        tail->grade.english = english;
        tail->grade.math = math;
        tail->grade.physics = physics;
        tail->grade.c = c;
    }
    tail->next = NULL;
    headp=head;
    return headp;
}
void print_list(struct s_list *headp) {
    while(headp) {
        printf("id:%d name:%s grade:{english:%.2f math:%.2f physics:%.2f c:%.2f}\n",headp->id, headp->name, headp->grade.english, headp->grade.math, headp->grade.physics, headp->grade.c);
        headp=headp->next;
    }
}

void update_list(struct s_list *headp, int id, int opt) {
    while (headp && headp->id != id) {
        headp = headp->next;
    }
    if (!headp) {
        printf("this id doesn't exist!\n");
        return ;
    }
    printf("new data:\n");
    switch (opt) {
        case 1:
            scanf("%d", &headp->id);
            break;
        case 2:
            scanf("%s", headp->name);
            break;
        case 3:
            scanf("%f", &headp->grade.english);
            break;
        case 4:
            scanf("%f", &headp->grade.math);
            break;
        case 5:
            scanf("%f", &headp->grade.physics);
            break;
        case 6:
            scanf("%f", &headp->grade.c);
            break;
    }
    printf("updated:\n");
    printf("id:%d name:%s grade:{english:%.2f math:%.2f physics:%.2f c:%.2f}\n",headp->id, headp->name, headp->grade.english, headp->grade.math, headp->grade.physics, headp->grade.c);
}

void print_average(struct s_list *headp) {
    while(headp) {
        float sum = headp->grade.english + headp->grade.math + headp->grade.physics + headp->grade.c;
        printf("%f\n", sum / 4);
        headp=headp->next;
    }
}
void print_total(struct s_list *headp) {
    while(headp) {
        float sum = headp->grade.english + headp->grade.math + headp->grade.physics + headp->grade.c;
        printf("id:%d name:%s total:%f, average:%f\n",headp->id, headp->name, sum, sum / 4);
        headp=headp->next;
    }
}
struct s_list * sort(struct s_list *headp) {
    struct s_list *t = headp;
    struct s_list *a = NULL;
    struct s_list *b;
    while(headp) {
        struct s_list *p = t;
        while (p->next) {
            if (p->grade.english + p->grade.math + p->grade.physics + p->grade.c > p->next->grade.english + p->next->grade.math + p->next->grade.physics + p->next->grade.c) {
                if (!a || p == t) {
                    b = p->next;
                    p->next = p->next->next;
                    b->next = p;
                    t = b;
                    a = b;
                } else {
                    b = p->next;
                    a->next = b;
                    p->next = p->next->next;
                    b->next = p;
                    a = b;
                }
            } else {
                a = p;
                p = p->next;
            }
        }

        headp=headp->next;
    }
    return t;
}
int main(void)
{
    struct s_list *head=NULL,*p;

    printf("input the info of students(end with 0):\n");
    p = create_list(head);

    printf("the info of students:\n");
    print_list(p);

    int id, opt;
    printf("input the id of student:\n");
    scanf("%d", &id);
    printf("input the item(1.id, 2.name, 3.english, 4.math, 5.physics, 6.c):\n");
    scanf("%d", &opt);
    update_list(p, id, opt);

    printf("the average grade of each student:\n");
    print_average(p);

    printf("the total and average grade of each student:\n");
    print_total(p);

    printf("sorted:\n");
    p = sort(p);
    print_total(p);
    system("pause");
    return 0;
}

