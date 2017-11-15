#include <stdio.h>

int main() {
    unsigned short x, m, n;
    printf("Input x,m and n:");
    scanf("%hu%hu%hu", &x, &m, &n);
    x >>= m;
    x <<= 16 - n;
    printf("%hu\n", x);
    return 0;
}
