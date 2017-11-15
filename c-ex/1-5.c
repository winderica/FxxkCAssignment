#include <stdio.h>

int main() {
    unsigned long ip, a, b, c, d;
    printf("Input the ip address:");
    scanf("%lu", &ip);
    a = (ip & 0xff000000) >> 24;
    b = (ip & 0xff0000) >> 16;
    c = (ip & 0xff00) >> 8;
    d = ip & 0xff;
    printf("%hu.%hu.%hu.%hu\n", a, b, c, d);
    return 0;
}
