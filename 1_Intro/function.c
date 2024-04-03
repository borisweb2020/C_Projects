#include <math.h>
#include <stdio.h>

double get_value(double x);

int main() {
    double a;
    char c;

    scanf("%lf", &a);
    c = getchar();
    if (c == '\n' && a != 0) {
        printf("%.2lf", get_value(a));
    } else {
        printf("n/a");
    }

    return 0;
}

double get_value(double x) {
    return 7e-3 * pow(x, 4.0) + ((22.8 * pow(x, 1.0 / 3.0) - 1e3) * x + 3.0) / (x * x / 2.0) -
           x * pow(10.0 + x, 2.0 / x) - 1.01;
}
