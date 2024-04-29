#include <stdio.h>
#define NMAX 100

int input(int *arr_1, int *arr_2, int *length_1, int *length_2);
void sum_digits(const int *arr_1, const int *arr_2, int length_1, int length_2, int *arr_result,
                int *length_result);
void subtract_digits(int *arr_1, const int *arr_2, int length_1, int length_2, int *arr_result,
                     int *length_result);
void reverse_array(int *array, int length);
void output(int *array, int length);

int main() {
    int data_1[NMAX], data_2[NMAX], length_1, length_2;

    if (input(data_1, data_2, &length_1, &length_2)) {
        int result[NMAX], length_result;
        sum_digits(data_1, data_2, length_1, length_2, result, &length_result);
        output(result, length_result);
        if (length_1 > length_2 || (length_1 == length_2 && data_1[0] >= data_2[0])) {
            subtract_digits(data_1, data_2, length_1, length_2, result, &length_result);
            output(result, length_result);
        } else {
            printf("n/a\n");
        }
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *arr_1, int *arr_2, int *length_1, int *length_2) {
    int result = 1;
    int condition = 1;
    *length_1 = 0;
    *length_2 = 0;
    char c;

    while (condition) {
        scanf("%d", arr_1);
        c = getchar();
        if (c == ' ' && *arr_1 >= 0 && *arr_1 < 10) {
            (*length_1)++;
            arr_1++;
            continue;
        }
        if (c != '\n') {
            *length_1 = 0;
            result = 0;
            condition = 0;
        } else {
            (*length_1)++;
            condition = 0;
        }
    }

    if (result) condition = 1;

    while (condition) {
        scanf("%d", arr_2);
        c = getchar();
        if (c == ' ' && *arr_2 >= 0 && *arr_2 < 10) {
            (*length_2)++;
            arr_2++;
            continue;
        }
        if (c != '\n') {
            *length_2 = 0;
            result = 0;
            condition = 0;
        } else {
            (*length_2)++;
            condition = 0;
        }
    }

    if (*length_1 <= 1 || *length_2 <= 1) result = 0;

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