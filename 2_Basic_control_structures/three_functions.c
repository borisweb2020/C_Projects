#include <math.h>
#include <stdio.h>

double Agnesi_function(double n);
double Bernoulli_function(double n);
double quadratic_hyperbola(double n);

int main() {
    const double PI = -3.14159265358979323846;
    double step = (PI * -2) / 41;
    double current_value, current_Agnesi, current_Bernoulli, current_hyperbola;
    for (int i = 0; i < 42; i++) {
        current_value = PI + (i * step);
        current_Agnesi = Agnesi_function(current_value);
        current_Bernoulli = Bernoulli_function(current_value);
        current_hyperbola = quadratic_hyperbola(current_value);
        if (current_Bernoulli >= 0) {
            printf("% .7lf | % .7lf | % .7lf | %.7lf |\n", current_value, current_Agnesi, current_Bernoulli,
                   current_hyperbola);
        } else {
            printf("% .7lf | % .7lf |    -   | %.7lf |\n", current_value, current_Agnesi, current_hyperbola);
        }
    }

    return 0;
}

double Agnesi_function(double n) { return pow(1.0, 3) / (1 + pow(n, 2)); }

double Bernoulli_function(double n) {
    double radical_expression, sub_radical_expression, result = -1;
    sub_radical_expression = sqrt(1.0 + (4.0 * n * n));
    radical_expression = sub_radical_expression - ((n * n) - 1.0);
    if (radical_expression >= 0) {
        result = sqrt(radical_expression);
    }

    return result;
}

double quadratic_hyperbola(double n) { return 1 / (n * n); }