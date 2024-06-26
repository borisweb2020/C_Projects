#include <stdio.h>
#define NMAX 100

int input(int *array, int *length);
void sum_digits(const int *arr_1, const int *arr_2, int length_1, int length_2, int *arr_result,
                int *length_result);
void subtract_digits(int *arr_1, const int *arr_2, int length_1, int length_2, int *arr_result,
                     int *length_result);
void reverse_array(int *array, int length);
int is_bigger(int *minuend, int length_1, int *subtrahend, int length_2);
void remove_zeros(int *array, int *length);
void output(int *array, int length);

int main() {
    int data_1[NMAX], data_2[NMAX], length_1, length_2;

    if (input(data_1, &length_1) && input(data_2, &length_2)) {
        int result[NMAX], length_result;
        remove_zeros(data_1, &length_1);
        remove_zeros(data_2, &length_2);
        sum_digits(data_1, data_2, length_1, length_2, result, &length_result);
        output(result, length_result);
        if (!is_bigger(data_1, length_1, data_2, length_2)) {
            subtract_digits(data_1, data_2, length_1, length_2, result, &length_result);
            remove_zeros(result, &length_result);
            output(result, length_result);
        } else {
            printf("n/a\n");
        }
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *array, int *length) {
    int result = 1;
    int condition = 1;
    *length = 0;

    while (condition) {
        scanf("%d", array);
        if (*array < 0 || *array >= 10) {
            result = 0;
            condition = 0;
        }
        char c = getchar();
        if (c == ' ') {
            (*length)++;
            array++;
            continue;
        }
        if (c != '\n') {
            *length = 0;
            result = 0;
            condition = 0;
        } else {
            (*length)++;
            condition = 0;
        }
    }

    if (*length <= 1) result = 0;

    return result;
}

void output(int *array, int length) {
    for (int *p = array; p - array < length; p++) {
        if (p - array == length - 1) {
            printf("%d\n", *p);
        } else {
            printf("%d ", *p);
        }
    }
}

void sum_digits(const int *arr_1, const int *arr_2, int length_1, int length_2, int *arr_result,
                int *length_result) {
    int sum, tmp = 0;
    *length_result = (length_1 > length_2) ? length_1 : length_2;
    for (int i = length_1 - 1, j = length_2 - 1, k = 0; k < *length_result; k++, i--, j--) {
        if (j < 0) {
            sum = arr_1[i] + tmp;
        } else if (i < 0) {
            sum = arr_2[j] + tmp;
        } else {
            sum = arr_1[i] + arr_2[j] + tmp;
        }
        if (sum >= 10) {
            tmp = 1;
            arr_result[k] = sum % 10;
        } else {
            tmp = 0;
            arr_result[k] = sum;
        }
    }

    if (tmp) {
        arr_result[*length_result] = tmp;
        (*length_result)++;
    }

    reverse_array(arr_result, *length_result);
}

void subtract_digits(int *arr_1, const int *arr_2, int length_1, int length_2, int *arr_result,
                     int *length_result) {
    int memory = 0;
    for (int i = length_1 - 1, j = length_2 - 1, k = 0; k < length_1; k++, i--, j--) {
        if (memory) {
            if (arr_1[i] == 0) {
                arr_1[i] = 10 + arr_1[i] - memory;
            } else {
                arr_1[i] = arr_1[i] - memory;
                memory = 0;
            }
        }
        if (j < 0) {
            arr_result[k] = arr_1[i] - memory;
        } else {
            int tmp = 0;
            if (arr_1[i] < arr_2[j]) {
                tmp = 10;
                memory = 1;
            }
            arr_result[k] = tmp + arr_1[i] - arr_2[j];
        }
    }

    *length_result = length_1;

    reverse_array(arr_result, *length_result);
}

void reverse_array(int *array, int length) {
    if (length % 2 == 0) {
        for (int i = 0, j = length - 1; i < length / 2; i++, j--) {
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    } else {
        for (int i = 0, j = length - 1; i < length; i++, j--) {
            if (i == j) break;
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
}

int is_bigger(int *minuend, int length_1, int *subtrahend, int length_2) {
    int result;
    if (length_2 > length_1) {
        result = 1;
    } else if (length_2 == length_1) {
        for (int *p = subtrahend, *q = minuend; q - minuend < length_1; p++, q++) {
            result = 0;
            if (*p > *q) {
                result = 1;
                break;
            }
        }
    } else {
        result = 0;
    }

    return result;
}

void remove_zeros(int *array, int *length) {
    int count = 0;
    for (int *p = array; p - array < *length; p++) {
        if (*p == 0) {
            count++;
        }
        if (*p > 0) break;
    }
    if (count) {
        for (int *p = array, *q = array + count; q - array < *length; p++, q++) {
            *p = *q;
        }

        *length = *length - count;
    }
}