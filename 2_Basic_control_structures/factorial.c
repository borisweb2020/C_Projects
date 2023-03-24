#include <stdio.h>

int factorial(int n);
void factorial_pro(int n, int *fact);

int main() {
    int fact;
    printf("%d\n", factorial(10));

    factorial_pro(10, &fact);
    printf("%d\n", fact);

    /* ЦИКЛ для вычисления факториала: */
    int f = 1;
    for (int i = 1; i <= 10; i++) {
        f *= i;
    }

    printf("%d\n", f);

    return 0;
}

/* ФУНКЦИЯ для вычисления фвкториала: */
int factorial(int n) {
    if (n <= 0) {
        return 1;  // ДОЛЖНА содержать условие, при котором рекурсия заканчивается!!!
    } else {
        return n * factorial(n - 1);
    }
}

/* ПРОЦЕДУРА для вычисления фвкториала: */
void factorial_pro(int n, int *fact) {
    if (n == 0) {
        *fact = 1;  // ДОЛЖНА содержать условие, при котором рекурсия заканчивается!!!
    } else {
        factorial_pro(n - 1, fact);
        *fact *= n;
    }
}