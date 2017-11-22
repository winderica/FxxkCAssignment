#include <stdio.h>
int main()
{
    long i;
    int flag = 0;
    printf("input a number:");
    scanf("%ld", &i);
    while (i > 0) {
	if (i % 10 != 0 || flag) {
            printf("%ld", i % 10);
	    flag = 1;
	}
	i /= 10;
    }
    printf("\n");
    return 0;
}

