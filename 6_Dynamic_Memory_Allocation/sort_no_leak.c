#include <stdio.h>
#include <stdlib.h>
#define NMAX 100

int *input_array(int *length);
void output_array(int *array, int length);

int main() {
    int length;
    int *array = input_array(&length);

    if (array != NULL) {
        output_array(array, length);
    } else {
        printf("n/a");
        free(array);
    }
    free(array);

    return 0;
}

int *input_array(int *length) {
    int *array = NULL;
    char c;
    if (scanf("%d%c", length, &c) == 2 && c == '\n' && *length > 1 && *length < NMAX) {
        array = (int *) calloc(*length, sizeof(int));
        if (array != NULL) {
            for (int *p = array; p - array < *length; p++) {
                scanf("%d", p);
                c = getchar();
                if (c == ' ') continue;
                if (c != '\n') {
                    array = NULL;
                    break;
                }
            }
        }
    } else {
        array = NULL;
    }

    return array;
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