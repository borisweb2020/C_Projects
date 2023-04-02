#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rand_1 = RAND_MAX;  // наибольшее возможное значение, которое может сгенерировать функция rand()
    printf("RAND_MAX: %d\n", rand_1);

    int rand_2 = rand();  // сгенерирует случайное число от 0 до RAND_MAX
    printf("Random value: %d\n", rand_2);

    int rand_3 = rand() % 15;  // сгенерирует случайное число от 0 до 14
    printf("Random value: %d\n", rand_3);

    printf("Number of seconds: %ld\n", time(NULL));  // количество секунд с начала эпохи 01.01.1970

    srand(time(NULL));  // инициализирует генератор случайных чисел с заданным начальным значением

    int rand_4 = rand() % 15;  // сгенерирует случайное число от 0 до 14
    printf("Random value from 0 to 14: %d\n", rand_4);

    float rand_5;
    rand_5 = ((float)rand() / RAND_MAX) * 15.4;  // генерирует случайное вещественное число от 0,0 до 15,4
    printf("Random value from 0.0 to 15.4: %.2f\n", rand_5);

    /* Генерация случайного вещественного числа в диапазоне от -10,0 до 15,4 */
    float rand_6, lower_bound, upper_bound;
    lower_bound = -10.0;
    upper_bound = 15.4;
    rand_6 = ((float)rand() / RAND_MAX) * (upper_bound - lower_bound) + lower_bound;
    printf("Random value [-10.0; 15.4]: %.3f\n", rand_6);

    /* Генерация случайного целого числа в диапазоне от -10 до 10 */
    int rand_7, a, b;
    a = -10;
    b = 10;
    rand_7 = (rand() % (b - a + 1)) + a;
    printf("Random value from -10 to 10: %d\n", rand_7);

    return 0;
}