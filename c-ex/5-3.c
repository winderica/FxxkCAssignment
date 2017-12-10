#include <stdio.h>
#include <stdlib.h>

#define M 10
#define N 3
int main() {
    int a[M], b[M];
    int i = -1, j, k, l = 0;
    for (j = 0; j < M; j++) {
        a[j] = j + 1;
    }
    for (k = 0; k < M - 1; k++) {
        for (j = 0; j < N; j++) {
            do {
                i = (i + 1) % M;
            } while (a[i] == 0);
        }
        b[l++] = a[i];
        a[i] = 0;
    }
    for (j = 0; j < M - 1; j++) {
        printf("%6d", b[j]);
    }
    for (j = 0; j < M; j++) {
        if (a[j] > 0) {
            printf("%6d\n", a[j]);
        }
    }
    system("pause");
    return 0;
}
