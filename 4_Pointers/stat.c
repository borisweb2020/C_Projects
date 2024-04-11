#include <stdio.h>

#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int get_max(int *a, int n);
int get_min(int *a, int n);
double get_mean(int *a, int n);
double get_variance(int *a, int n, double m);
void output_result(int max_v, int min_v, double mean_v, double variance_v);

int main() {
    int n, data[NMAX];

    if (input(data, &n)) {
        output(data, n);
        output_result(get_max(data, n), get_min(data, n), get_mean(data, n),
                      get_variance(data, n, get_mean(data, n)));
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *a, int *n) {
    int result = 1;
    char c;
    if (scanf("%d%c", n, &c) == 2 && c == '\n' && *n >= 2) {
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

void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        if (p - a == n - 1) {
            printf("%d\n", *p);
        } else {
            printf("%d ", *p);
        }
    }
}

int get_max(int *a, int n) {
    int max = *a;
    for (int *p = a; p - a < n; p++) {
        if (*p > max) max = *p;
    }

    return max;
}

int get_min(int *a, int n) {
    int min = *a;
    for (int *p = a; p - a < n; p++) {
        if (*p < min) min = *p;
    }

    return min;
}

double get_mean(int *a, int n) {
    int sum = 0;
    for (int *p = a; p - a < n; p++) {
        sum += *p;
    }
    double mean = (double)sum / n;

    return mean;
}

double get_variance(int *a, int n, double m) {
    int sum = 0;
    for (int *p = a; p - a < n; p++) {
        sum += (*p * *p);
    }
    double sum_sqr = (double)sum / n;
    double variance = sum_sqr - (m * m);

    return variance;
}

void output_result(int max_v, int min_v, double mean_v, double variance_v) {
    printf("%d %d %.6lf %.6lf", max_v, min_v, mean_v, variance_v);
}
