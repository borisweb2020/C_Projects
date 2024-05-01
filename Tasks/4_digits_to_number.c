#include <stdio.h>
#define NMAX 16

int input_array(int *array, int *length);
int input_number(int *a);
int convert_digits_to_int(const int *array, int length);
void convert_number_to_digits(int number, int *array, int *length);
void output_array(int *array, int length);

int main() {
    int array_in[NMAX], length_in, number_in;

    if (input_array(array_in, &length_in) && input_number(&number_in)) {
        int array_out[NMAX], length_out;
        int number_out = convert_digits_to_int(array_in, length_in);
        convert_number_to_digits(number_in, array_out, &length_out);
        printf("%d\n", number_out);
        output_array(array_out, length_out);
    } else {
        printf("n/a");
    }

    return 0;
}

int input_array(int *array, int *length) {
    int result = 1;
    int condition = 1;
    *length = 0;

    printf("Enter an array: ");

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

int input_number(int *a) {
    int result = 1;
    char c;
    printf("Enter a number: ");
    if (!(scanf("%d%c", a, &c) == 2 && c == '\n')) result = 0;

    return result;
}

void output_array(int *array, int length) {
    for (int *p = array; p - array < length; p++) {
        if (p - array == length - 1) {
            printf("%d\n", *p);
        } else {
            printf("%d ", *p);
        }
    }
}

int convert_digits_to_int(const int *array, int length) {
    int number = 0;
    int n = 1;
    for (int i = 0; i < length - 1; i++) {
        n *= 10;
    }

    for (int i = 0; i < length; i++) {
        number += array[i] * n;
        n /= 10;
    }

    return number;
}

void convert_number_to_digits(int number, int *array, int *length) {
    int n = 1;
    int count = 0;
    int condition = 1;

    while (condition) {
        n *= 10;
        if (number % n == number) condition = 0;
    }

    n /= 10;

    for (int j = 0; n >= 1; n /= 10, j++) {
        int tmp = number / n;
        number = number - tmp * n;
        array[j] = tmp;
        count++;
    }

    *length = count;
}