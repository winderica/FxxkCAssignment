#include <stdio.h>

double sum_fac(int n);
int main(void)
{
    int k;
    for(k=1;k<6;k++)
        printf("k=%d\tthe sum is %lf\n",k,sum_fac(k));
}

double sum_fac(int n)
{
    double s=0;
    int i;
    long fac = 1;
    for (i = 1; i <= n; i++) {
        fac*=i;
        s += 1.0/fac;
    }
    return s;
}

