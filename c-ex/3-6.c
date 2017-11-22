#include <stdio.h>
#define BEGIN 10
#define END 20

int prime[END] = {2};

void addPrime() {
    int i, j, k = 1;
    for (i = 3; i <= END; i++) {
        for (j = 0; j < k; j++) {
            if (i % prime[j] == 0 || prime[k - 1] == i) {
                break;
            }
            prime[k] = i;
            k++;
        }
    }
}

int main() {
    int i, j, k, flag;
    addPrime();
    printf("GOLDBACH'S CONJECTURE:\nEvery even number n>=4 is the sum of two primes.\n");
    for (i = BEGIN; i <= END; i++) {
        flag = 0;
        for (j = 0; j < END && prime[j] && !flag; j++) {
            for (k = 0; k < END && prime[k]; k++) {
                if (prime[j] + prime[k] == i) {
                    printf("%d=%d+%d\n", i, prime[j], prime[k]);
                    flag = 1;
                }
            }
        }
    }
    return 0;
}
