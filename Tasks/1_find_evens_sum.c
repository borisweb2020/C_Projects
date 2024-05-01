#include <stdio.h>
#define NMAX 10

int input(int *array, int *length);
int even_elements_sum(int *array, int length);
void output_elements(int *array, int length, int dividend);

int main() {
    int data[NMAX], length;

    if (input(data, &length)) {
        int sum = even_elements_sum(data, length);
        if (sum) {
            printf("%d\n", sum);
            output_elements(data, length, sum);
        } else {
            printf("n/a");
        }
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *array, int *length) {
    int result = 1;
    char c;
    if (scanf("%d%c", length, &c) == 2 && c == '\n' && *length > 1 && *length <= NMAX) {
        for (int i = 0; i < *length; i++) {
            scanf("%d", &array[i]);
            c = getchar();
            if (c == 32) continue;
            if (c != 10) {
                result = 0;
                break;
            }
        }
    } else {
        result = 0;
    }

    return result;
}

int even_elements_sum(int *array, int length) {
    int result = 0;
    for (int *p = array; p - array < length; p++) {
        if (*p % 2 == 0) result += *p;
    }

    return result;
}

void output_elements(int *array, int length, int dividend) {
    for (int *divisor = array; divisor - array < length; divisor++) {
        if (*divisor == 0) continue;
        if (dividend % *divisor == 0) printf("%d ", *divisor);
    }
}