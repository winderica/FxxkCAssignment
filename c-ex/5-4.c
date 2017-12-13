#include <stdio.h>

void mystrncat(char [],char [],int);
int main(void)
{
    char a[50]="The adopted symbol is ",b[27]="abcdefghijklmnopqrstuvwxyz";
    mystrncat(a, b, 4);
    printf("%s\n",a);
    return 0;
}
void mystrncat(char s[], char t[], int n)
{
    int i = 0, j;
    while(s[i++]) ;
    i -= 1; //在while循环后s多自增了一次，应将i减去1
    for(j = 0; j < n && t[j];) {
        s[i++] = t[j++];
    }
    s[i] = '\0';
}

