#include <stdio.h>
#include <string.h>

int main() {
    char name_4[] = "Bill";
    char name_5[] = "Bob";
    int d = strcmp(name_4, name_5);
    if (d == 0) {
        printf("Строки %s и %s одинаковы\n", name_4, name_5);
    } else {
        printf("Разность кодов первых различных символов d: %d\n", d); // i == 105 & o == 111 => 105 - 111 = -6
        printf("Строки %s и %s разные\n", name_4, name_5); // 
    }

    //*** Разность кодов первых различных символов можно использовать для сортировки строк:
    char string_1[10], string_2[10];
    printf("Введите первую строку: ");
    scanf("%s", string_1);
    printf("Введите вторую строку: ");
    scanf("%s", string_2);
    if (strcmp(string_1, string_2) <= 0) {
        printf("%s\n%s\n", string_1, string_2);
    } else {
        printf("%s\n%s\n", string_2, string_1);
    }

    /*
    Иногда сравнивают не всю строку, а только первые несколько символов --- strncmp()
    Третий параметр функции - количество стравниваемых символов
    */
    char string_3[10], string_4[10];
    printf("Введите первую строку: ");
    scanf("%s", string_3);
    printf("Введите вторую строку: ");
    scanf("%s", string_4);
    if (strncmp(string_3, string_4, 2) == 0) {
        printf("Первые два символа %s и %s одинаковы\n", string_3, string_4);
    } else {
        printf("Первые два символа %s и %s разные\n", string_3, string_4);
    }

    /*
    Программа, которая спрашивает пароль и, если пароль введен неверно, заканчивает работу,
    а если верно, то определяет сколько цифр в символьной строке:
    */
    char password[] = "string";
    char input_string[50];
    int i = 0, count = 0;
    printf("Введите пароль: ");
    scanf("%s", input_string);
    if (strcmp(password, input_string) != 0) {
        printf("Неверный пароль\n");
        return 1;
    }
    printf("Введите строку: ");
    scanf("%s[^\n]", input_string);
    while (input_string[i] != '\0') { // пока не дойдем до символа NULL
        if (input_string[i] >= 48 && input_string[i] <= 57) { // коды для цифр от 48 до 57
            count++;
        }
        i++;
    }
    printf("Количество цифр в строке: %d\n", count);

    return 0;
}