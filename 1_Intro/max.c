#include <stdio.h>

int search_max(int a, int b);

int main() {
    int a, b;

    scanf("%d%d", &a, &b);
    char c = getchar();
    if (c == '\n') {
        printf("%d", search_max(a, b));
    } else {
        printf("n/a");
    }

    return 0;
}

int search_max(int a, int b) {
    int max_value = a;

    if (b > max_value) max_value = b;

    return max_value;
}
