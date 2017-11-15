#include "stdio.h"

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    gcd(b, a % b);
}
int main(void)
{
    int a, b;
    printf("Input 2 numbers:\n");
    scanf("%d%d", &a, &b);
    printf("answer is %d\n", gcd(a, b));
    return 0;
}
