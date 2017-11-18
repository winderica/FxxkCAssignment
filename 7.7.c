#include <stdio.h>

int main() {
    int a, i, j;
    scanf("%d", &a);
    int s[a];
    for (i = 0; i < a; i++) {
        scanf("%d", &s[i]);
    }
    for (i = 0; i < a; i++) {
        for (j = i; j < a; j++) {
            if (s[j] < s[i]) {
                int t = s[j];
                s[j] = s[i];
                s[i] = t;
            }
        }
    }
    for (i = 0; i < a - 1; i++) {
        printf("%d ", s[i]);
    }
    printf("%d\n", s[a-1]);
}
