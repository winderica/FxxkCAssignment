#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    while (i > 0) {
        printf("%d", i % 10);
        i /= 10;
    }
    return 0;
}

