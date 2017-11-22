#include <stdio.h>

int main() {
    char c;
    int flag = 0;
    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            flag = 1;
        }
        if (c != ' '){
            if (flag) {
                printf(" ");
                flag = 0;
            }
            printf("%c", c);
        }
    }
    if (flag) {
        printf(" ");
    }
    printf("\n");
    return 0;
}
