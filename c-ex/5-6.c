#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, j = 0, k;
    char a[1000], t;
    scanf("%d", &i);
    while (i > 0) {
        a[j] = i % 2 + 48;
        i /= 2;
        j++;
    }
    a[j] = '\0';
    for (k = 0; k < j / 2; k++) {
        t = a[k];
        a[k] = a[j - 1 - k];
        a[j - 1 - k] = t;
    }
    printf("%s\n", a);
    system("pause");
    return 0;
}
