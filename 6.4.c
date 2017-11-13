#include <stdio.h>
#define Swap(x, y) ({int t = (y); (y) = (x); (x) = t;})

int main() {
    int x, y, i = 0;
    while (scanf("%d%d", &x, &y) != EOF) {
        i++;
        printf("Case %d:\n", i);
        printf("Before Swap:a=%d b=%d\n", x, y);
        Swap(x, y);
        printf("After Swap:a=%d b=%d\n", x, y);
        printf("\n");
    }
}
