#include<stdio.h>
#include <stdlib.h>
struct student {
    char name[100];
    int grade;
};
void sort(struct student a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].grade < a[j + 1].grade) {
                struct student t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
void search(struct student a[], int n, int g) {
    int start = 0, end = n;
    do {
        n = (start + end) / 2;
        if (a[n].grade < g) {
            end = n - 1;
        } else if (a[n].grade > g) {
            start = n + 1;
        } else {
            printf("%s %d\n", a[n].name, a[n].grade);
            return;
        }
    } while (end >= start);
    printf("not found!");
}
int main(void) {
    int n, g;
    printf("input n:\n");
    scanf("%d", &n);
    struct student a[n];
    printf("input students' info:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s%d", a[i].name, &a[i].grade);
    }
    sort(a, n);
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", a[i].name, a[i].grade);
    }
    printf("input the grade:\n");
    scanf("%d", &g);
    search(a, n, g);
    system("pause");
    return 0;
}
