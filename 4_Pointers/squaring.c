#include <stdio.h>

#define NMAX 10

int input(int *a, int *n);
void squaring(int *a, int n);
void output(int *a, int n);

int main() {
    int data[NMAX];
    int n;

    if (input(data, &n)) {
        squaring(data, n);
        output(data, n);
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *a, int *n) {
    int result = 1;
    char c;
    if (scanf("%d%c", n, &c) == 2 && c == '\n') {
        if (*n < 2) {
            result = 0;
        } else {
            for (int *p = a; p - a < *n; p++) {
                scanf("%d", p);
                c = getchar();
                if (c == '\n') {
                    break;
                }

                if (c != ' ') {
                    result = 0;
                    break;
                }
            }
        }
    } else {
        result = 0;
    }

    return result;
}

void output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
}

void squaring(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        *p = *p * *p;
    }
}