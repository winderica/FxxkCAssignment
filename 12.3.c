#include <stdio.h>

void f(char a[], int i) {
    if (a[i] == '\0') {
        return;
    }
    f(a, i + 1);
    printf("%c", a[i]);
}

int main() {
    char a[1001];
    while (scanf("%[^\n]%*c", a) !=  EOF) {
        f(a, 0);
        printf("\n");
    }
    return 0;
}
