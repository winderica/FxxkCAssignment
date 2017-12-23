#include <stdio.h>
struct bits
{
    unsigned int bit0:1, bit1:1, bit2:1, bit3:1, bit4:1, bit5:1, bit6:1, bit7:1;
};
union {
    unsigned int t;
    struct bits a;
} m;
void f0(unsigned int b) {
    printf("the function 0 is called, value: %d!\n", b);
}
void f1(unsigned int b) {
    printf("the function 1 is called, value: %d!\n", b);
}
void f2(unsigned int b) {
    printf("the function 2 is called, value: %d!\n", b);
}
void f3(unsigned int b) {
    printf("the function 3 is called, value: %d!\n", b);
}
void f4(unsigned int b) {
    printf("the function 4 is called, value: %d!\n", b);
}
void f5(unsigned int b) {
    printf("the function 5 is called, value: %d!\n", b);
}
void f6(unsigned int b) {
    printf("the function 6 is called, value: %d!\n", b);
}
void f7(unsigned int b) {
    printf("the function 7 is called, value: %d!\n", b);
}
int main() {
    unsigned int n;
    void (*p_fun[8])(unsigned int) = { f0, f1, f2, f3, f4, f5, f6, f7 };
    printf("input n:\n");
    scanf("%d", &n);
    m.t = n;
    if (m.a.bit0) {
        p_fun[0](m.a.bit0);
    }
    if (m.a.bit1) {
        p_fun[1](m.a.bit1);
    }
    if (m.a.bit2) {
        p_fun[2](m.a.bit2);
    }
    if(m.a.bit3) {
        p_fun[3](m.a.bit3);
    }
    if(m.a.bit4) {
        p_fun[4](m.a.bit4);
    }
    if(m.a.bit5) {
        p_fun[5](m.a.bit5);
    }
    if(m.a.bit6) {
        p_fun[6](m.a.bit6);
    }
    if(m.a.bit7) {
        p_fun[7](m.a.bit7);
    }
}
