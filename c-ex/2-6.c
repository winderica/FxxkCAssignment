#include <stdio.h>
int main()
{
    int i;
    printf("input a number:");
    scanf("%d", &i);
    while (i > 0) {
        printf("%d", i % 10);
        i /= 10;
    }
    printf("\n");
    return 0;
}

