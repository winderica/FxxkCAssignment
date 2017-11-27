#include <stdio.h>
#define L 5

int main() {
    int a[L][L], i, j, (*p)[L];
    for (i = 0; i < L; i++) {
        for (j = 0; j < L; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < L; i++) {
        p = a;
        for (j = 0; j < L; j++) {
            printf(" %d", *(*p + i));
            if (j == L - 1) {
                printf("\n");
            }
            p++;
        }
    }
    return 0;
}
