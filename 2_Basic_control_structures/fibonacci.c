#include <stdio.h>

int fibo(int n);

int main() {
    printf("%d\n", fibo(10));

    /* ЦИКЛ для вычисления числа Фибоначчи: */
    int f1 = 1, f2 = 0, x;
    int n = 10;

    for (int i = 2; i <= n; i++) {
        x = f1 + f2;
        f2 = f1;
        f1 = x;
    }

    printf("%d\n", x);

    return 0;
}

/* ФУНКЦИЯ для вычисления числа Фибоначчи: */
int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibo(n - 1) + fibo(n - 2);
}