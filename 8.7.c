#include <stdio.h>

int main() {
    int N, n, i, j, *p;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &n);
        int x[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &x[j]);
        }
        p = x;
        for (j = 0; j < n; j++) {
            printf("%d", *(p + n - 1 - j));
            if (j == n - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    return 0;
}
