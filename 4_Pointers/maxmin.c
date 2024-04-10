#include <stdio.h>

void max_min(int a, int b, int c, int *max, int *min);

int main() {
  int x, y, z;
  char c;

  if (scanf("%d%d%d%c", &x, &y, &z, &c) == 4 && c == '\n') {
    int max, min;
    max_min(x, y, z, &max, &min);
    printf("%d %d", max, min);
  } else {
    printf("n/a");
  }

  return 0;
}

void max_min(int a, int b, int c, int *max, int *min) {
  *max = *min = a;

  if (b > *max)
    *max = b;
  if (b < *min)
    *min = b;

  if (c > *max)
    *max = c;
  if (c < *min)
    *min = c;
}