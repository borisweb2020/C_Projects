#include <stdio.h>
#include <string.h>

int main() {
    char string_1[20];  // строка-приемник
    char string_2[10];  // строка-источник
    printf("Введите строку: ");
    scanf("%s", string_2);
    strcpy(string_1, string_2);  // string_1 - receiver <-- string_2 - source
    puts(string_1);

    char string_3[10] = "ab";  // indexes: [0, 1, 2, 3...]
    char string_4[5];
    printf("Введите строку: ");
    scanf("%s", string_4);
    strcpy(string_3 + 2, string_4);  // начиная со 2-го индекса вставит
    puts(string_3);

    /*
    strncpy() - копирует заданное количество символов n
    !!! strncpy() не записывает завершающий '\0'
    strcpy() всегда копирует завершающий '\0'
    */
    char string_5[10];
    char string_6[] = "abc";
    strncpy(string_5, string_6, 2);  // копировать 2 символа
    string_5[2] = '\0';              // добавить завершающий '\0'
    puts(string_5);

    return 0;
}