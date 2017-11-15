#include "stdio.h"
long sum_fac(int n); //先声明
int main(void) //void->int
{
    int k;
    for(k=1;k<6;k++)
        printf("k=%d\tthe sum is %ld\n",k,sum_fac(k));
}
long sum_fac(int n)
{
    long s=0;
    int i, j;
    for (j = 1; j <= n; j++) { //循环将s增加i！
        long fac = 1; // 初始化为1，放在第一层循环内部
        for(i=1;i<=j;i++){
            fac*=i;
        }
        s+=fac;
    }
    return s;
}

