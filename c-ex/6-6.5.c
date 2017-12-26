#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void foo(int *a, int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(a + j) < *(a + j + 1)) {
                t = *(a + j);
                * (a + j) = *(a + j + 1);
                * (a + j + 1) = t;
            }
        }
    }
}

void bar(int *a, int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(a + j) > *(a + j + 1)) {
                t = *(a + j);
                * (a + j) = *(a + j + 1);
                * (a + j + 1) = t;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int n, i;
    void (*p)(int *, int);
    printf("input the number of data:\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    p = (argc > 1 && !strcmp(argv[1], "-d")) ? foo : bar;
    p(a, n);
    printf("sorted\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}


