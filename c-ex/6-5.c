#include <stdio.h>
#include <stdlib.h>

int main() {
    long int n;
    char *p, low, high;
    int i;
    printf("input a long int number:\n");
    scanf("%ld", &n);
    p = (char *)&n;
    p += 3;
    for (i = 0; i < 4; i++) {
        low = (char) ((*p) & 0x0f);
        low += low < 10 ? '0' : 'A' - 10;
        high = (char) ((*p >> 4) & 0x0f);
        high += high < 10 ? '0' : 'A' - 10;
        printf("%c %c ", high, low);
        p--;
    }
    printf("\n"); 
    system("pause");
    return 0;
}
