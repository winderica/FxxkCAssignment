#include <stdio.h>

void foo(int u[], int k, int n) {
    int t, i, j;
    for (i = 0; i < k; i++) {
        t = u[0];
        for (j = 1; j <= n - 1; j++) {
            u[j - 1] = u[j];
        }
        u[n - 1] = t;
    }
}

int main() {
    int u[60];
    int n, k, i;
    while (scanf("%d%*c%d%*c", &n, &k) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &u[i]);
        }
        foo(u, k, n);
        for (i = 0; i < n; i++) {
            printf("%d", u[i]);
            if (i == n - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
}
