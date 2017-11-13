#include <stdio.h>

int main() {
    int n, i, a[10], j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int s = 0;
        for (j = 0; j < 10; j++) {
            scanf("%d", &a[j]);
            s += a[j];
        }
        printf("sum=%d\n", s);
    }
}
