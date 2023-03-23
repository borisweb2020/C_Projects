#include <stdio.h>
#include <stdlib.h>

int is_prime(int n);  // is prime (return 1 - true) or not (return 0 - false)
int divisor(int a);   // largest divisor

int main() {
    int a;
    char c;

    if (scanf("%d%c", &a, &c) == 2 && c == '\n') {
        a = abs(a);
        if (a == 1 || a == 0) {
            printf("invalid value\n");
        } else {
            printf("%d\n", divisor(a));
        }
    } else {
        printf("n/a\n");
    }

    return 0;
}

int divisor(int a) {
    int result = 1;
    int condition = 1;

    for (int i = a - 1; i > 0; i--) {
        result = i;
        condition = 1;
        while (condition) {
            result += i;
            if (result > a) {
                condition = 0;
            }
            if (result == a) {
                result = i;
                condition = 0;
            }
        }
        if (result == i) {
            if (is_prime(i)) {
                result = i;
                break;
            }
        }
    }

    return result;
}

int is_prime(int n) {
    int result;
    int condition = 1;
    if (n == 2 || n == 3) {
        result = 1;
    }
    for (int i = 2; i * i <= n; i++) {
        result = i;
        condition = 1;
        while (condition) {
            result += i;
            if (result > n) {
                condition = 0;
            }
            if (result == n) {
                condition = 0;
            }
        }
        if (result == n) {
            result = 0;  // is not prime
            break;
        }
    }

    return result;
}