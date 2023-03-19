#include <stdio.h>

int max(int a, int b);

int main() {
    int a, b;
    char c;

    if (scanf("%d%d%c", &a, &b, &c) == 3 && c == '\n') {
        printf("%d\n", max(a, b));
    } else {
        printf("n/a\n");
    }

    return 0;
}

int max(int a, int b) {
    int max_value = a;

    if (max_value < b) max_value = b;

    return max_value;
}