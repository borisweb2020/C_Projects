#include <stdio.h>
#define NMAX 10

int input(int *array, int *length, int *n);
void left_shift(int *array, int length);
void right_shift(int *array, int length);
void rotate_elements(int *array, int length, int n);
void output(int *array, int length);

int main() {
    int data[NMAX], length, n;

    if (input(data, &length, &n)) {
        rotate_elements(data, length, n);
        output(data, length);
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *array, int *length, int *n) {
    int result = 1;
    char c;
    if (scanf("%d%c", length, &c) == 2 && c == '\n' && *length > 1 && *length <= NMAX) {
        for (int *p = array; p - array < *length; p++) {
            scanf("%d", p);
            c = getchar();
            if (c == ' ') continue;
            if (c != '\n') {
                result = 0;
                break;
            }
        }
        scanf("%d", n);
        c = getchar();
        if (c != '\n') result = 0;
    } else {
        result = 0;
    }

    return result;
}

void output(int *array, int length) {
    for (int *p = array; p - array < length; p++) {
        printf("%d ", *p);
    }
}

void left_shift(int *array, int length) {
    int tmp = *array;
    for (int i = 1; i < length; i++) {
        array[i - 1] = array[i];
    }
    array[length - 1] = tmp;
}

void right_shift(int *array, int length) {
    int tmp = array[length - 1];
    for (int i = length - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = tmp;
}

void rotate_elements(int *array, int length, int n) {
    if (n < 0) {
        n *= -1;
        while (n) {
            right_shift(array, length);
            n--;
        }
    } else {
        while (n) {
            left_shift(array, length);
            n--;
        }
    }
}