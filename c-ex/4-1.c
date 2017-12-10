#include "stdio.h"
#define SUM ((a)+(b)) // a+b -> ((a)+(b))
#define DIF ((a)-(b)) // a-b -> ((a)-(b))
#define SWAP(a,b) (t = (a), (a)=(b), (b) = t) //利用中间变量t
int main()  // 加括号 void->int
{
    int a, b, t; // 声明a
    printf("Input two integers a, b:");
    scanf("%d,%d", &a,&b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM, SUM*DIF);
    SWAP(a,b);
    printf("\nNow a=%d,b=%d\n",a,b); // p为小写
    return 0; // return 0
}

