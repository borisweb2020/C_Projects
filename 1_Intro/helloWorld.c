#include <stdio.h>

int main() {
    char nickname[10];
    scanf("%9[A-Za-z]s", nickname);         // input aks123 --- output aks
    scanf("%9[^0123456789\n]s", nickname);  // input aks123 --- output aks
    if (!scanf("%9[A-Za-z]s", nickname)) {
        printf("Not valid character\n");
    } else {
        printf("Hello, %s\n", nickname);
    }

    //*** The first case
    puts("The first case");
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
    puts("The second case");
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

    //*** The third case
    puts("The third case");
    int age_2;
    int return_value;
    return_value = scanf("%d", &age_2);
    printf("Returned value of scanf: %d\n", return_value);
    printf("Inputted value: %d\n", age_2);

    char sym;
    return_value = scanf("%d%c", &age_2, &sym);
    printf("Returned value of scanf: %d\n", return_value);
    printf("Inputted values: %d %c\n", age_2, sym);

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

  *** The third case
  Если вводим 6t, то функция scanf() возвращает 1 и присваивает 6 переменной age_2
  Если вводим t6, то возвращает 0 и присваивает переменной значение 4096

  РАЗНИЦА между %d %c и %d%c - в случае с пробелом функция выполняется так: После ввода цифры, будет ждать ввода следующего симввола отличного от \n
  во втором случае - символ \n сразу запишется в буфер
*/
