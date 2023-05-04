#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Prodijy";
    printf("A length of the string %s is equal %lu\n", name, strlen(name));  // length == 7

    char name_2[10] = "Prodijy\n";  // Если получаем через scanf() или fgets(), то
    printf("A length of the string %s is equal %lu\n", name_2, strlen(name_2));  // length == 8
    if (name_2[strlen(name_2) - 1] == '\n') {
        name_2[strlen(name_2) - 1] = '\0';  // поэтому удаляем символ \n
    }
    printf("A length of the string %s is equal %lu\n", name_2, strlen(name_2));  // length == 7

    char name_3[10];
    char c;
    if (fgets(name_3, sizeof(name_3), stdin)) {  // Если будет введено более 9 символов
        printf("A length of the string %s is equal %lu\n", name_3, strlen(name_3));
    }
    c = getchar();  // то 10-й будет перехвачен здесь. Поэтому нужно чистить буфер
    putchar(c);

    return 0;
}