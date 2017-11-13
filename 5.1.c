#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a, b, c;
    char d;
    scanf("%d", &n);
    srand(n);
    while (1) {
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        c = a + b;
        printf("%4d%4d%4d\n", a, b, c);
        if (c == 11 || c == 7) {
            printf("success\n");
        } else if (c == 2 || c == 3 || c == 12) {
            printf("failed\n");
        } else {
            do {
                a = rand() % 6 + 1;
                b = rand() % 6 + 1;
                printf("%4d%4d%4d\n", a, b, a + b);
                if (a + b == c) {
                    printf("success\n");
                    break;
                }
                if (a + b == 7) {
                    printf("failed\n");
                    break;
                }
            } while (1);
        }
        printf("继续玩吗\n");
        scanf("%*c%c", &d);
        if (d == 'n') {
            break;
        } else if (d == 'y') {
            continue;
        }
    }
}
