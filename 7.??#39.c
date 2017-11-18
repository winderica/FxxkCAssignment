nclude <string.h>

int foo(char s[], int i, int j) {
    if (i < j) {
        if (s[i] != s[j]) {
            return 0;
        }
        foo(s, i + 1, j - 1);
    }
    return 1;
}

int main() {
    int a, i;
    char s[10000], f[10];
    scanf("%d", &a);
    for (i = 0; i < a; i++) {
        scanf("%s", s);
        printf(foo(s, 0, strlen(s) - 1) == 1 ? "Yes!\n" : "No!\n");
    }
}*/

#include <stdio.h>
#include <string.h>
int foo(char * string, int n, int i) {
    int t;
    t = n / 2;
    if (i >= t) {
        return 1;
    }
    if ( *(string + i) != *(string + n - 1 - i) ) {
        return 0;
    }
    return foo(string, n, (i+1));
}
int main() {
    int a;
    int len;
    int i = 0;
    char s[100];
    scanf("%d",&a);
    getchar();
    while(a--) {
        fgets(s,100,stdin);
        len = strlen(s);
        s[len - 1] = '\0';
        len = strlen(s);
        if (foo(s,len,i)) {
            printf("Yes!\n");
        } else {
            printf("No!\n");
        }
    }
    return 0;
}


