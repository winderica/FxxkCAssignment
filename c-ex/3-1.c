#include <stdio.h> //最好使用<>,以包含标准头文件
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
    int i;
    long fac = 1;//初始化为1
    for(i=1;i<=n;i++){ //加上大括号
        fac*=i;
        s+=fac;
    }
    return s;
}

