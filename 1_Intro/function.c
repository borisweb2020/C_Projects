#include <math.h>
#include <stdio.h>

float important_function(float x);
float round_function(float x);

int main() {
    float x;
    char c;

    if (scanf("%f%c", &x, &c) == 2 && c == '\n') {
        printf("%.3f\n", important_function(x));
        printf("%.3f\n", round_function(x));
    } else {
        printf("n/a\n");
    }

    return 0;
}

float important_function(float x) {
    return 7e-3 * powf(x, 4) + ((22.8 * powf(x, 1 / 3) - 1e3) * x + 3) / (x * x / 2) - x * powf(10 + x, 2 / x) - 1.01;
}

float round_function(float x) {
    return round(x);  // ceil(x); floor(x)
}