#include <stdio.h>
#include <math.h>
#define s(a,b,c) (((a) + (b) + (c)) / 2)
#define area(s,a,b,c) (sqrt((s)*((s)-(a))*((s)-(b))*((s)-(c))))

int main() {
    double a, b, c, s;
    printf("input three sides:");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0) {
	printf("error input\n");
	return -1;
    }
    s = s(a, b, c);
    printf("the area is: %lf\n", area(s, a, b, c));
    return 0;
}
