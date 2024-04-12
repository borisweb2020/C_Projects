#include <stdio.h>
#define NMAX 10

int input(int *a, int n);
void output(int *a, int n);
void swap(int *b, int *c);
void bubble_sort(int *a, int n);

int main() {
    int array[NMAX], length = NMAX;

    if (input(array, length)) {
        bubble_sort(array, length);
        output(array, length);
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *a, int n) {
    int result = 1;
    for (int *p = a; p - a < n; p++) {
        scanf("%d", p);
        char c = getchar();
        if (c == ' ') continue;
        if (c != '\n') {
            result = 0;
            break;
        }
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

void swap(int *b, int *c) {
    int tmp = *b;
    *b = *c;
    *c = tmp;
}

void bubble_sort(int *a, int n) {
    int length = n;
    while (length != 0) {
        int max_index = 0;
        for (int *p = a + 1; p - a < length; p++) {
            if (*(p - 1) > *p) {
                swap(p - 1, p);
                max_index = p - a;
            }
        }
        length = max_index;
    }
}
