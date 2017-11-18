#include <stdio.h>
#include <string.h>

void mystrncpy(char t[], char s[], int n) {
    int i;
    if (n > strlen(s)) {
        n = strlen(s);
    }
    for (i = 0; i < n; i++) {
        t[i] = s[i];
    }
    for (i = 0; i < n; i++) {
        printf("%c", t[i]);
    }
    printf("\n");
}

int main() {
    char s[1000], t[1000];
    int i, N, n;
    scanf("%d%*c", &N);
    for (i = 0; i < N; i++) {
        scanf("%[^\n]%*c", s);
        scanf("%d%*c", &n);
        mystrncpy(t, s, n);
    }
}
