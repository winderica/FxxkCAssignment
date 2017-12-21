#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char a[1000], b[1000];
    char *(*p[2])(const char *,const char *) = {strstr, strpbrk};
    printf("input two strings:\n");
    scanf("%s%s", a, b);
    printf("strstr of two strings is %s\n", p[0](a, b));
    printf("strpbrk of two strings is %s\n", p[1](a, b));
    system("pause");
    return 0;
}
