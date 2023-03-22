#include <stdlib.h>
#include <stdio.h>

int prime (int n); // is prime (return 1 - true) or not (return 0 - false)

int divisor(int a); // largest divisor

int main() {
    int a;
    char c;

    if (scanf("%d%c", &a, &c) == 2 && c == '\n') {
        a = abs(a);
        printf("%d\n", divisor(a));
    } else {
        printf("n/a\n");
    }

    return 0;
}

int divisor(int a) {
    int result = 1;
    for (int i = a - 1; i > 0; i--) {
        if (a % i == 0) {
            if (prime(i)) {
                result = i;
                break;
            }
        }
    }

    return result;
}

int prime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0; // not prime
    return 1;
}