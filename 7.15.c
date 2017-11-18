#include <stdio.h>

int main() {
    int a, i, c;
    scanf("%d", &a);
    for (i = 0; i < a; i++) {
        scanf("%*c %*c %*c %x", &c);
        printf("%d\n", c);
    }
}
