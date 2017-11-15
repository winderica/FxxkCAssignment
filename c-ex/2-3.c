#include <stdio.h>
int main()  //void->int
{
    int i,n,s=1;
    printf("Please enter n:");
    scanf("%d",&n); //n->&n取地址
    i=1;
    do { // 逗号->分号
        s=s*i;
        i++;
    } while(i<=n);
    printf("%d! = %d",n,s);
}

