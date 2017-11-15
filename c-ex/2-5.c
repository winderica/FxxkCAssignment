#include <stdio.h>
#define N 9
int factorial(int a) {
    int i, t = 1;
    for (i = 1; i <= a; i++) {
        t *= i;
    }
    return t;
}
int comb(int a,int b) {
    return factorial(a) / (factorial(b) * factorial(a - b));
};
int main()
{
    int i, j, k;
    for (i = 0; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf("  ");
        }
        for (k = 0; k <= i; k++) {
            printf("%-4d", comb(i, k));
        }
        for (j = 1; j <= N - i; j++) {
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}

