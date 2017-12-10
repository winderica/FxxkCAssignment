#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

int main() {
    int a[M][N], i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Original:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transposed:\n");
    for (j = 0; j < N; j++) {
        for (i = 0; i < M; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
