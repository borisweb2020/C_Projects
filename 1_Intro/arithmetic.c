#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int a, b;
    char c;

    if (scanf("%d%d%c", &a, &b, &c) == 3 && c == '\n') {
        if (b != 0) {
            printf("%d %d %d %.1f", add(a, b), subtract(a, b), multiply(a, b), divide(a, b));
        } else {
            printf("%d %d %d n/a", add(a, b), subtract(a, b), multiply(a, b));
        }
    } else {
        printf("n/a");
    }

    return 0;
}

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }
