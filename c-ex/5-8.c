#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strnins(char *s, char *t, int n) {
    int i;
    for (i = strlen(s) + strlen(t); i > n + strlen(t); i--) {
        s[i] = s[i - strlen(t)];
    }
    for (i = 0; i < strlen(t); i++) {
        s[n + i + 1] = t[i];
    }
    s[strlen(s) + strlen(t) + 1] = '\0';
}

int main() {
    char a[1000], b[1000];
    int n;
    printf("input two strings and the insertion number(begin at 0):\n");
    scanf("%s%s%d", a, b, &n);
    strnins(a, b, n);
    printf("%s\n", a);
    system("pause");
    return 0;
}
