#include <stdio.h>
#include <string.h>

int main() {
    char string_1[] = "Hello World!";
    char *p;

    p = strchr(string_1, 'o');  // второй аргумент - искомый символ
    if (p != NULL) {
        printf("Символ о имеет индекс: %ld, Адрес символа: %p, Адрес массива: %p\n", p - string_1, p, string_1);
    }

    p = strrchr(string_1, 'o');  // поиск символа с конца строки
    if (p != NULL) {
        printf("Символ о с конца строки имеет индекс: %ld\n", p - string_1);
    }

    char string_2[] = "Cats and dogs";
    p = strstr(string_2, "dogs");  // поиск строки
    if (p != NULL) {
        printf("Найдена строка %c\n", *p);
    } else {
        printf("Нет строки dogs в %s\n", string_2);
    }

    //***** Замена символа \n на \0 *****
    char name[10];
    char *pointer;
    if (fgets(name, sizeof(name), stdin) != NULL) {
        pointer = strrchr(name, '\n');
        if (pointer != NULL) *pointer = '\0';
        printf("Length: %lu\n", strlen(name));
    } else {
        printf("Input Error");
    }

    return 0;
}