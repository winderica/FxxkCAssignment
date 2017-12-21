#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

void foo(float *grade, char students[N][100]) {
    int i, j;
    float sum;
    for (i = 0; i < N; i++) {
        sum = 0;
        for (j = 0; j < M; j++) {
            sum += * (grade + i * M + j);
        }
        printf("the average grade of %s is %f\n", *(students + i), sum / M);
    }
}

void bar(float *grade, char courses[M][100]) {
    int i, j;
    float sum;
    for (i = 0; i < M; i++) {
        sum = 0;
        for (j = 0; j < N; j++) {
            sum += * (grade + j * M + i);
        }
        printf("the average grade of %s is %f\n", *(courses + i), sum / N);
    }
}

void bat(float *grade, char courses[M][100]) {
    int i, j;
    float sum;
    for (i = 0; i < M; i++) {
        sum = 0;
        int t = 0;
        for (j = 0; j < N; j++) {
            sum += * (grade + j * M + i);
        }
        for (j = 0; j < N; j++) {
            if ( *(grade + j * M + i) < sum / N) {
                t++;
            }
        }
        printf("the number of students whose %s grade is lower than average is %d\n", *(courses + i), t);
    }
}

void baz(float *grade, char courses[M][100]) {
    int i, j;
    for (i = 0; i < M; i++) {
        int t = 0, r = 0;
        for (j = 0; j < N; j++) {
            if (*(grade + j * M + i) < 60) {
                t++;
            }
            if (*(grade + j * M + i) >= 90) {
                r++;
            }
        }
        printf("the number of students whose %s grade is lower than 60 is %d\n", *(courses + i), t);
        printf("the number of students whose %s grade is higher than 90 is %d\n", *(courses + i), r);
    }
}

int main() {
    char courses[M][100], students[N][100];
    float grades[N][M];
    int i, j;
    float *grade = grades[0];
    printf("input name of %d courses\n", M);
    for (i = 0; i < M; i++) {
        scanf("%s", courses[i]);
    }
    printf("input name of %d students\n", N);
    for (i = 0; i < N; i++) {
        scanf("%s", students[i]);
    }
    for (i = 0; i < N; i++) {
        printf("input %s's grades:\n", *(students + i));
        for (j = 0; j < M; j++) {
            printf("%s\n", *(courses + j));
            scanf("%f", &grades[i][j]);
        }
    }

    foo(grade, students);
    bar(grade, courses);
    bat(grade, courses);
    baz(grade, courses);

    system("pause");
    return 0;
}

