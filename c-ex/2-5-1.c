#include <stdio.h>



int main() {
    int x;
    printf("input the wage:");
    scanf("%d", &x);
    printf("if: ");
    if (x < 1000) {
        printf("%d", 0);
    } else if (x < 2000) {
        printf("%lf", (x - 1000) * 0.05);
    } else if (x < 3000) {
        printf("%lf", (x - 2000) * 0.1 + 1000 * 0.05);
    } else if (x < 4000) {
        printf("%lf", (x - 3000) * 0.15 + 1000 * 0.15);
    } else if (x < 5000) {
        printf("%lf", (x - 4000) * 0.2 + 1000 * 0.3);
    } else {
        printf("%lf", (x - 5000) * 0.25 + 1000 * 0.5);
    }
    printf("\nswitch: ");
    switch (x / 1000) {
        case 0:{
            printf("%d", 0);
            break;
        }
        case 1:{
            printf("%lf", (x - 1000) * 0.05);
            break;
        }
        case 2:{
            printf("%lf", (x - 2000) * 0.1 + 1000 * 0.05);
            break;
        }
        case 3:{
            printf("%lf", (x - 3000) * 0.15 + 1000 * 0.15);
            break;
        }
        case 4:{
            printf("%lf", (x - 4000) * 0.2 + 1000 * 0.3);
            break;
        }
        default:{
            printf("%lf", (x - 5000) * 0.25 + 1000 * 0.5);
            break;
        }
    }
    printf("\n");
}
