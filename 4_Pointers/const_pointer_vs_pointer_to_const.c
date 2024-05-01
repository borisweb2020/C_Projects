#include <stdio.h>

int main() {
    puts("***** const pointer ******");

    int array[5] = {1, 2, 3, 4, 5};
    const int *p_array = array;

    // p_array[0] = 100; ОШИБКА !! НЕЛЬЗЯ менять значение в ячейки памяти

    int item_1 = p_array[0];  // Читать значения МОЖНО
    printf("%d\n", item_1);   // 1

    p_array++;  // Менять адрес указателя МОЖНО
    int item_2 = *p_array;
    printf("%d\n", item_2);  // 2

    puts("***** pointer to const ******");

    char buffer[5] = {'a', 'b', 'c', 'd', 'e'};
    char *const p_buffer = buffer;

    p_buffer[0] = 'X';          // МОЖНО менять значение в ячейке памяти
    char item_3 = p_buffer[0];  // МОЖНО читать значения
    printf("%c\n", item_3);     // X

    // p_buffer++;  ОШИБКА !! НЕЛЬЗЯ менять адрес указателя

    return 0;
}