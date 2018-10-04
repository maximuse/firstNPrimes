#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isPrime(int n) {
    if(n == 1) {
        return false;
    }

    if(n == 2) {
        return true;
    }

    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    int pieces = 0;
    int i = 2;
    FILE * file = fopen("primes.txt", "w");

    printf("First n pcs prime numbers: ");
    scanf("%d", &n);

    printf("\n");

    while(pieces < n) {
        if(isPrime(i)) {
            pieces++;
            fprintf(file, "%d\n", i);
            printf("%d\n", i);
        }

        i++;
    }

    printf("\n");

    fclose(file);

    system("PAUSE");
    return 0;
}