#include <math.h>
#include <stdio.h>

double foo();

int main() {
    printf("%f\n", 7e5);      // 700000
    printf("%f\n", 7e-5);     // 0.00007
    printf("%.1e\n", 0.009);  // 9.0e-03
    printf("%.0e\n", 4e3);    // 4e+03

    /* Implicit conversion (automatically) */
    int a = 4;
    double b = 5.6;
    double result_double = a + b;  // 9.600000
    int result_int = a + b;        // 9

    int c = 10;
    int d = 4;
    int result_1 = c / d;     // 2
    double result_2 = c / d;  // 2.000000
    /* Explicit conversion (manually) */
    double result_3 = (double)c / d;  // 2.500000

    double res = foo();     // 0.000000000022061
    printf("%.1e\n", res);  // 2.2e-11
    if (res > 0) printf("OK!");
    if (res < 1e-6) printf("OK!\n");

    return 0;
}

double foo() { return (1.0 / 13) * (pow(((2 - 1.0) / (2 + 1.0)), 20)); }
