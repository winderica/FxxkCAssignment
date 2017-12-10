#include<stdio.h>
void sort(int [], int n); //声明应在main函数外部
int main(void)
{
    int a[10] = {27, 13, 5, 32, 23, 3, 17, 43, 55, 39};
    int i;
    sort(a,10); //传入整个数组
    for(i = 0; i < 10; i++)
        printf("%6d",a[i]);
    printf("\n");
    return 0;
}
void sort(int b[], int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (b[j] > b[j + 1]) //升序排序
                t = b[j], b[j] = b[j + 1], b[j + 1] = t;
}
