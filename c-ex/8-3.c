#include <stdio.h>
int main() {
    char ch;
    FILE * fp;
    fp = freopen("D:\\test.txt", "w", stdout);
    while ((ch = getchar()) != '\n') putchar(ch); // 加括号
    fclose(fp);
    return 0;
}

