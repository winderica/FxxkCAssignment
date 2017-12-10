nclude<stdio.h>
#include <stdlib.h>

#define Queens 8
int solution = 0;
int queen[Queens][Queens] = {
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0}
};
int canPlace(int row, int col) {
    int m, n;
    for (m = 0; m < col; m++) {
        if (queen[row][m]) {
            return 0;
        }
    }
    for (m = row, n = col; m >= 0 && n >= 0; m--, n--) {
        if (queen[m][n]) {
            return 0;
        }
    }
    for (m = row, n = col; m < Queens && n >= 0; m++, n--) {
        if (queen[m][n]) {
            return 0;
        }
    }
    return 1;
}
int place(int i) {
    int m, n;
    if (i == Queens) {
        solution++;
        printf("solution %d:\n",solution);
        for(m = 0; m < Queens; m++) {
            for(n = 0; n < Queens; n++) {
                printf("%d ", queen[m][n]);
            }
            printf("\n");
        }
        printf("\n");
        return 1;
    }
    for (int j = 0; j < Queens; j++) {
        if (canPlace(j, i)) {
            queen[j][i] = 1;
            place(i + 1);
            queen[j][i] = 0;
        }
    }
    return 0;
}
int main(void) {
    place(0);
    printf("there are %d solutions in total\n", solution);
    system("pause");
    return 0;
}
