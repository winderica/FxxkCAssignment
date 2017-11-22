#include <stdio.h>
int main()
{
    long i;
    printf("input a number:");
    scanf("%ld", &i);
    while (i > 0) {
	if (i % 10 != 0) {
            printf("%ld", i % 10);
        }
	i /= 10;
    }
    printf("\n");
    return 0;
}

