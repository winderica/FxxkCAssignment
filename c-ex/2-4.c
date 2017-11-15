#include <stdio.h>
int main()  //void->int
{
    int i,s=1, s2;
    printf("Please enter s:");
    scanf("%d",&s2); //n->&n取地址
    i=1;
    while(s < s2) { // 逗号->分号
        s = s * i;
        i++;
    }
    printf("n=%d",i - 1);
    return 0;
}

