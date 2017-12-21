#include <stdio.h>
#include <stdlib.h>

void zip(char *p) {
    int flag = 0;
    int hasChar = 0;
    while (*p) {
        if (*p == ' ' || *p == '\n') {
            flag = 1;
        } else {
            if (flag) {
                printf(" ");
                flag = 0;
            }
            printf("%c", *p);
            hasChar = 1;
        }
        p++;
    }
    if (hasChar) {
        printf("\n");
    }
}

int main() {
    int n, i;
    char a[80];
    char *p[n][80];
    printf("input n:\n");
    scanf("%d\n", &n);
    for (i = 0; i < n; i++) {
        gets(a);
	*p[i] = a;
        zip(*p[i]);
    }
    system("pause");
    return 0;
}
