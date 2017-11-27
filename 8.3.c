#include <stdio.h>
#define L 10

void bubbleSort(int *a) {
    int i, j, t, *p;
    for (i = 0; i < L; i++) {
        p = a;
        for (j = 0; j < L - 1 - i; j++) {
            if (*p > *(p + 1)) {
                t = *p;
                *p = *(p + 1);
                *(p + 1) = t;
            }
            p++;
        }
    }
}

int main() {
    int a[L], i;
    while (scanf("%d", &a[0]) != EOF) {
        for (i = 1; i < L; i++) {
            scanf("%d", a + i);
        }
        bubbleSort(a);
        for (i = 0; i < L; i++) {
            printf("%d", *(a + i));
            if (i == L - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    return 0;
}
