#include <math.h>
#include <stdio.h>
#define NMAX 30

int input(int *a, int *n);
int is_even(int b);
double get_mean(int *a, int n);
double three_sigma_rule(int *a, int n, double mean);
int output_result(int *a, int n, double mean, double sigma);

int main() {
    int n, data[NMAX];

    if (input(data, &n)) {
        double mean_v = get_mean(data, n);
        double sigma_v = three_sigma_rule(data, n, mean_v);
        printf("%d", output_result(data, n, mean_v, sigma_v));
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *a, int *n) {
    int result = 1;
    char c;
    if (scanf("%d%c", n, &c) == 2 && c == '\n' && *n >= 2 && *n < 31) {
        for (int *p = a; p - a < *n; p++) {
            scanf("%d", p);
            c = getchar();
            if (c == ' ') continue;
            if (c != '\n') {
                result = 0;
                break;
            }
        }
    } else {
        result = 0;
    }

    return result;
}

int is_even(int b) {
    int result = 1;
    if (b % 2 != 0) result = 0;

    return result;
}

double get_mean(int *a, int n) {
    double result;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    result = (double)sum / n;

    return result;
}

double three_sigma_rule(int *a, int n, double mean) {
    double result;
    int sum_sqr = 0;
    for (int i = 0; i < n; i++) {
        sum_sqr += (a[i] * a[i]);
    }
    double sum_sqr_mean = (double)sum_sqr / n;
    double variance = sum_sqr_mean - pow(mean, 2);
    result = mean + 3.0 * sqrt(variance);

    return result;
}

int output_result(int *a, int n, double mean, double sigma) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        if (is_even(a[i]) && (double)a[i] >= mean && (double)a[i] <= sigma && a[i] != 0) {
            result = a[i];
            break;
        }
    }

    return result;
}