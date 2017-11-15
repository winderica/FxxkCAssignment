#include<stdio.h>
#define PI 3.14159 //去掉分号
int main() { //void -> int main函数不能用void声明
    int f , newint;//newint未声明
    short p, k;
    double c , r , s ;

/* for task 1 */
    printf("Input  Fahrenheit:" ) ; //全角引号->半角引号
    scanf("%d", &f ) ; //f -> &f 取地址 全角引号->半角引号
    c = 5.0/9*(f-32) ; //5 -> 5.0 浮点数
    printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ; //全角引号->半角引号

/* for task 2 */
    printf("input the radius r:");
    scanf("%lf", &r); //%f -> %lf double型
    s =  PI * r * r;
    printf("\nThe acreage is %.2lf\n\n",s); //%f -> %lf double型 &s -> s 无需取地址

/* for task 3 */
    printf("input hex int k, p :");
    scanf("%hx %hx", &k, &p ); //%x -> %hx short型十六进制
    newint = (p&0xff00) | (k&0xff00)>>8; //声明变量类型, << -> >>向右移位
    printf("new int =%x\n\n",newint);
    return 0; //返回0
}

