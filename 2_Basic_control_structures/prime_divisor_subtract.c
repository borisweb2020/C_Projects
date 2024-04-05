#include <stdio.h>

int get_largest_prime_divisor(int a);
int is_prime(int x);

int main() {
    int a;
    char c;

    if (scanf("%d%c", &a, &c) == 2 && c == '\n') {
        if (a < 0) a *= -1;
        if (a == 0 || a == 1) {
            printf("1");
        } else {
            printf("%d", get_largest_prime_divisor(a));
        }
    } else {
        printf("n/a");
    }

    return 0;
}

int get_largest_prime_divisor(int a) {
    int d = a;
    int lpd = 0;
    for (int i = a - 1; i > 0; i--) {
        while (d > 0) {
            d = d - i;
            if (d == 0 && is_prime(i) == 1) {
                lpd = i;
                break;
            }
        }
        if (lpd) {
            break;
        } else {
            d = a;
        }
    }

    return lpd;
}

int is_prime(int x) {
    int prime = 1;
    int d = x;
    for (int n = x - 1; n > 1; n--) {
        while (d > 0) {
            d = d - n;
            if (d == 0) {
                prime = 0;
                break;
            }
        }
        if (prime == 0) {
            break;
        } else {
            d = x;
        }
    }

    return prime;
}
