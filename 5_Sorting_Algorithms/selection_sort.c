#include <stdio.h>
#define NMAX 10

int input(int array[], int length);
void output(int array[], int length);
void selection_sort(int array[], int length);

int main() {
    int data[NMAX], length = NMAX;

    if (input(data, length)) {
        selection_sort(data, length);
        output(data, length);
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int array[], int length) {
    int result = 1;
    for (int i = 0; i < length; i++) {
        scanf("%d", array + i);
        char c = getchar();
        if (c == ' ') continue;
        if (c != '\n') {
            result = 0;
            break;
        }
    }

    return result;
}

void output(int array[], int length) {
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            printf("%d", array[i]);
        } else {
            printf("%d ", array[i]);
        }
    }
}

void selection_sort(int array[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < length; j++) {
            if (array[min_index] > array[j]) min_index = j;
        }
        if (min_index != i) {
            int temp = array[min_index];
            array[min_index] = array[i];
            array[i] = temp;
        }
    }
}