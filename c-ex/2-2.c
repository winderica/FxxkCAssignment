#include <stdio.h>
int main()  //void->int
{
    int i,n,s=1;
    printf("Please enter n:");
    scanf("%d",&n); //n->&n取地址
    i=1;
    while(i<=n){ // 逗号->分号
        s=s*i;
        i++;
    }
    printf("%d! = %d",n,s);
}

