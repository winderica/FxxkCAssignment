#include <stdio.h> // 最好将引号改为尖括号
int main(void)    // void -> int
{
    float *p;
    float s;
    p = &s;       // p应先指向一个地址
    scanf("%f",&s); // 读入s
    printf("%f\n",*p);
}

