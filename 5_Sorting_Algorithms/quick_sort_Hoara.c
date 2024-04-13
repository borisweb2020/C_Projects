#include <stdio.h>
#define NMAX 10

int input(int *a, int n);
void output(int *a, int n);
void swap(int *b, int *c);
void quick_sort(int *a, int n);
void quick_sort_recursion(int *a, int low, int high);
int partition(int *a, int low, int high);

int main() {
    int array[NMAX], length = NMAX;

    if (input(array, length)) {
        quick_sort(array, length);
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

void quick_sort(int *a, int n) { quick_sort_recursion(a, 0, n - 1); }

void quick_sort_recursion(int *a, int low, int high) {
    // stop recursion when low >= high
    if (low < high) {
        int pivot_index = partition(a, low, high);
        quick_sort_recursion(a, low, pivot_index - 1);   // apply quicksort to the left side subarray
        quick_sort_recursion(a, pivot_index + 1, high);  // apply quicksort to the right side subarray
    }
}

int partition(int *a, int low, int high) {
    int pivot_index = (low + high) / 2;
    if (pivot_index != high) {
        swap(&a[pivot_index], &a[high]);
    }

    int pivot_value = a[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (a[j] <= pivot_value) {
            swap(&a[i], &a[j]);
            i++;
        }
    }

    swap(&a[i], &a[high]);

    return i;
}