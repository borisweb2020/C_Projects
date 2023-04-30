#include <stdio.h>
#include <string.h>

int main() {
    puts("**** strlen ****");
    char name[] = "Prodijy";
    printf("A length of the string %s is equal %lu\n", name, strlen(name)); // length == 7

    char name_2[10] = "Prodijy\n"; // Если получаем через scanf() или fgets(), то
    printf("A length of the string %s is equal %lu\n", name_2, strlen(name_2)); // length == 8
    if (name_2[strlen(name_2) - 1] == '\n') {
        name_2[strlen(name_2) - 1] = '\0'; // поэтому удаляем символ \n
    }
    printf("A length of the string %s is equal %lu\n", name_2, strlen(name_2)); // length == 7

    char name_3[10];
    char c;
    if (fgets(name_3, sizeof(name_3), stdin)) { // Если будет введено более 9 символов
        printf("A length of the string %s is equal %lu\n", name_3, strlen(name_3));
    }
    c = getchar(); // то 10-й будет перехвачен здесь. Поэтому нужно чистить буфер 
    putchar(c);

    puts("**** strcmp ****");
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

    return 0;
}