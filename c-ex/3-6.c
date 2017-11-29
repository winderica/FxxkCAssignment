#include <stdio.h>
#define BEGIN 10
#define END 20

int isPrime(int n) {
    int i;
    for (i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i, j, k, flag;
    printf("GOLDBACH'S CONJECTURE:\nEvery even number n>=4 is the sum of two primes.\n");
    for (i = BEGIN; i <= END; i += 2) {
        flag = 0;
        for (j = 2; j < END && !flag; j++) {
            if (isPrime(j)) {
                for (k = 2; k < END; k++) {
                    if (isPrime(k) && j + k == i) {
                        printf("%d=%d+%d\n", i, j, k);
                        flag = 1;
                    }
                }
            }
        }
    }
    return 0;
}
