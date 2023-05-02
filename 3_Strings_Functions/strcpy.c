#include <stdio.h>
#include <string.h>

void strcpy_reverse(char *s_1, char *s_2);

int main() {
    // char string_1[20];  // строка-приемник
    // char string_2[10];  // строка-источник
    // printf("Введите строку: ");
    // scanf("%s", string_2);
    // strcpy(string_1, string_2);  // string_1 - receiver <-- string_2 - source
    // puts(string_1);

    // char string_3[10] = "ab";  // indexes: [0, 1, 2, 3...]
    // char string_4[5];
    // printf("Введите строку: ");
    // scanf("%s", string_4);
    // strcpy(string_3 + 2, string_4);  // начиная со 2-го индекса вставит
    // puts(string_3);

    /*
    strncpy() - копирует заданное количество символов n
    !!! strncpy() не записывает завершающий '\0'
    strcpy() всегда копирует завершающий '\0'
    */
    // char string_5[10];
    // char string_6[] = "abc";
    // strncpy(string_5, string_6, 2);  // копировать 2 символа
    // string_5[2] = '\0';              // добавить завершающий '\0'
    // puts(string_5);

    char string_7[50] = "Иван Иванов";
    // char string_8[] = "Иванович ";
    char buffer[20];

    // int length = strlen(string_8);
    strcpy_reverse(buffer, string_7);  // раздвигаем на n символов
    // strncpy(string_7, string_8, length);  // вставляем отчество в середину
    puts(buffer);
    printf("%c\n", string_7[8]);

    return 0;
}

/*
Функция, которая копирует с конца блока, т.е. в обратном порядке.
Такая функция полезна, если требуется расширить строку, т.е.
вставить новоую между двумя словами.
*/
void strcpy_reverse(char s_1[], char s_2[]) {
    int n = strlen(s_2);
    for (int i = 0; i < n; i++) {
        if (s_2[n - 1] != 32) {
            s_1[i] = s_2[n - 1];
            n--;
        } else {
            s_1[i] = '\0';
            break;
        }
    }
}