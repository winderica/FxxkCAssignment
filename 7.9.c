#include <stdio.h>

int main() {
    int s[37], c, i;
    for (i = 0; i < 37; i++) {
        s[i] = 0;
    }
    while ((c = getchar()) != EOF) {
            if (c >= 48 && c <= 57) {
                s[c - 48] = s[c - 48] + 1;
            } else if (c >= 65 && c <= 90) {
                s[c - 65 + 10] = s[c - 65 + 10] + 1;
            } else if (c >= 97 && c <= 122) {
                s[c - 97 + 10] = s[c - 97 + 10] + 1;
            } else {
                s[36] = s[36] + 1;
            }
    }
    for (i = 0; i <= 9; i++) {
        printf("%c:%d", i + 48, s[i]);
        if (i != 9) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
    for (i = 10; i <= 35; i++) {
        printf("%c:%d", i + 97 - 10, s[i]);
        if (i != 35) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
    printf("other:%d\n", s[36]);
}
