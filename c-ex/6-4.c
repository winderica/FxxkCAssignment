#include <stdio.h> // 最好将引号改为尖括号
char *strcpy(char *,char *);
int main(void)  // void -> int
{
    char a[60],b[60]="there is a boat on the lake.";   //  a溢出
    printf("%s\n",strcpy(a,b));

}
char *strcpy(char *s,char *t)
{
    char *a = s;        //在while循环中s的指向发生改变，应先存储其初始值
    while(*s++=*t++)
        ;
    return (a);
}

