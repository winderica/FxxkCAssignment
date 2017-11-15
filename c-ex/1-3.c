#include <stdio.h>

int main() {
    char c;
    printf("Enter a character:");
    c = getchar();
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    printf("%c", c);
    return 0;
}
