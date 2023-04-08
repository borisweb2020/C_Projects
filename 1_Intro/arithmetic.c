#include <stdio.h>

int main() {
    int a, b;
    char c;
    if (scanf("%d%d%c", &a, &b, &c) == 3 && c == '\n') {
        printf("The sum is %d\n", a + b);
        printf("The difference is %d\n", a - b);
        printf("The product is %d\n", a * b);
        if (b != 0) {
            printf("The quotient is %d\n", a / b);
        } else {
            printf("Division by zero\n");
        }
    } else {
        printf("n/a\n");
    }

    return 0;
}