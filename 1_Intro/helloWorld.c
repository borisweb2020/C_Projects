#include <stdio.h>

int main() {
    // char nickname[10];
    // scanf("%9[A-Za-z]s", nickname);         // input aks123 --- output aks
    // scanf("%9[^0123456789\n]s", nickname);  // input aks123 --- output aks
    // if (!scanf("%9[A-Za-z]s", nickname)) {
    //     printf("Not valid character\n");
    // } else {
    //     printf("Hello, %s\n", nickname);
    // }

    //*** The first case
    char c, b, n;
    scanf("%c", &c);
    printf("Inputted character c: %c\n", c);
    while ((n = getchar()) != '\n' && n != EOF ) // пока не дошли до символа \n
        ; // выполняй этот цикл, т.е. перехватывай лишние символы
    scanf("%c", &b);
    printf("Inputted character b: %c\n", b);
    while ((n = getchar()) != '\n' && n != EOF )
        ;

    //*** The second case
    int digit;
    scanf("%d", &digit);
    printf("Inputted digit: %d\n", digit);

    char t;
    scanf("%c", &t);
    printf("A symbol after digit: %c\n", t);
    while ((n = getchar()) != '\n' && n != EOF )
        ;

    int age;
    char p;
    printf("Enter the age: ");
    scanf("%d", &age);
    p = getchar();
    if (p != '\n') {
        printf("n/a\n");
        return 1;
    }
    printf("Inputted age: %d\n", age);

    return 0;
}

/*
  *** The first case
  Функция scanf() запишет в символ &c введенный символ + \n или если введем два символа, то в буфер будет записано два символа
  плюс \n. Следующая функция получит уже символ из буфера. Если постваить функцию  getchar(), то она перехватит только один лишний
  символ из буфера, чтобы перехватить все возможные лишние символы из буфера поставим цикл.

  *** The second case
  Если для digit вводим число указанного типа, то в буфере остается символ \n, который и будет записан в переменную t.
  Если для digit вводим неправильный символ, например М, то в digit запишется 0, а в t запишется символ М 

*/
