#include <stdio.h>
#include <stdlib.h>
struct s_list{
    int data;
    struct s_list *next;
} ;
struct s_list * create_list (struct s_list *headp,int *p);
int main(void)
{
    struct s_list *head=NULL,*p;
    int s[]={1,2,3,4,5,6,7,8,0};
    p = create_list(head,s);
    while(p) {
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    system("pause");
    return 0;
}
struct s_list * create_list(struct s_list *headp,int *p)
{
    struct s_list * tail=NULL,*head,*t;
    if(p[0]==0)
        ;
    else {
        tail=(struct s_list *)malloc(sizeof(struct s_list));
        tail->data=*p++;
        tail->next=NULL;
        head=tail;
        while(*p){
            t = head;
            head=(struct s_list *)malloc(sizeof(struct s_list));
            head->next=t;
            head->data=*p++;
        }
    }
    headp=head;
    return headp;
}

