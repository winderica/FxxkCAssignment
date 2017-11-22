#include <stdio.h>
double f(double i) {
    double t = 3*i*i*i - 4*i*i - 5*i + 13;
    return t;
}
double g(double i) {
    double t = 9*i*i - 8*i - 5;
    return t;
}
int isSolution(double i) {
    double t = f(i)/g(i);
    if ((t <= 10e-6 && t >= 0) || (t <= 0 && t >= -10e-6)) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    double x, a;
    printf("Input initial value of x:");
    scanf("%lf", &a);
    x = a;
    while (!isSolution(x)) {
        x = x - f(x)/g(x);
    }
    printf("%lf", x);
}
