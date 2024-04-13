#include <stdio.h>
#define NMAX 100

int input(int *a, int *n);
void output(int *a, int n);
void insertion_sort(int *a, int n);

int main() {
    int data[NMAX], length;

    if (input(data, &length)) {
        insertion_sort(data, length);
        output(data, length);
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *a, int *n) {
    int result = 1;
    char c;
    if (scanf("%d%c", n, &c) == 2 && c == '\n' && *n > 1) {
        for (int *p = a; p - a < *n; p++) {
            scanf("%d", p);
            c = getchar();
            if (c == ' ') continue;
            if (c != '\n') {
                result = 0;
                break;
            }
        }

    } else {
        result = 0;
    }

    return result;
}

void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        if (p - a == n - 1) {
            printf("%d", *p);
        } else {
            printf("%d ", *p);
        }
    }
}

void insertion_sort(int *a, int n) {
    for (int i = 1; i < n; i++) {
        int start = i - 1;
        while (start > -1 && a[start] > a[start + 1]) {
            int temp = a[start];
            a[start] = a[start + 1];
            a[start + 1] = temp;
            start--;
        }
    }
}