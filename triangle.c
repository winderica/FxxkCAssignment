#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, s;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f%f%f", &a, &b, &c);
        d = (a + b + c) / 2;
        s = sqrt(d*(d-a)*(d-b)*(d-c));
        printf("area=%f\n", s);
    }
}
