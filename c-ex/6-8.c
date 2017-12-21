
#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[32], b[32], c[32] = {};
    char *p1 = &a[30], *p2 = &b[30], *p3 = &c[31];
    int i, j = 0;
    *p3 = '\0';
    p3--;
    printf("input two numbers:\n");
    scanf("%s%s", a, b);
    for (i = 0; i < 10; i++) {
        *p3 = (*p1 + *p2 - 96 + j) % 10 + 48;
        j = (*p1 + *p2 - 96 + j) / 10;
        p1--;
        p2--;
        p3--;
    }
    *p3 = '.';
    p1--;
    p2--;
    p3--;
    for (i = 0; i < 20; i++) {
        *p3 = (*p1 + *p2 - 96 + j) % 10 + 48;
        j = (*p1 + *p2 - 96 + j) / 10;
        p1--;
        p2--;
        p3--;
    }
    if (j == 1) {
        printf("%d", j);
    }
    printf("%s\n", c);
    system("pause");
    return 0;
}
