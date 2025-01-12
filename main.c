#include <stdio.h>
#include <stdbool.h>
#include <math.h> 

int isPrime(int num) {
    if (num <= 1) {
        return false; 
    }
    if (num == 2) {
        return true;
    }
    if ((num & 1) == 0) {
        return false;
    }
    int limit = (int)ceil(sqrt(num));
    for (int i = 3; i <= limit; i+=2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 999999;
    int totalPrimes = 0;
    // Input upper limit
    //printf("Enter the upper limit: ");
    ///scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);
    
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            totalPrimes++;
            printf("%d \n", i);
        }
    }

    printf("Total Primes %d", totalPrimes);

    printf("\n");

    return 0;
}
