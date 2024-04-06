#include <stdio.h>

int fibo_recursive(int n);
int fibo_dynamic(int n);
int fibo_loop(int n);

static int cache[100] = {0};

int main() {
    int a;
    char c;

    if (scanf("%d%c", &a, &c) == 2 && c == '\n') {
        if (a < 0) a *= -1;
        printf("%d", fibo_dynamic(a));
    } else {
        printf("n/a");
    }

    return 0;
}

/* Dynamic Programming */

// 1. Top-down approach (recursion with caching):

int fibo_recursive(int n) {
    if (n <= 1) return n;
    if (cache[n] == 0) cache[n] = fibo_recursive(n - 1) + fibo_recursive(n - 2);

    return cache[n];
}

// 2. Bottom-up approach:
int fibo_dynamic(int n) {
    int fibo_sequence[n + 1];
    fibo_sequence[0] = 0;
    fibo_sequence[1] = 1;
    for (int i = 2; i <= n; i++) fibo_sequence[i] = fibo_sequence[i - 1] + fibo_sequence[i - 2];

    return fibo_sequence[n];
}

/* Looping Method */
int fibo_loop(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int f_1 = 1;
    int f_2 = 1;
    int result;
    for (int i = 2; i < n; i++) {
        result = f_1 + f_2;
        f_1 = f_2;
        f_2 = result;
    }

    return result;
}
