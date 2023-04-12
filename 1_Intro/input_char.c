#include <stdio.h>

int main() {
    char space = 32;  // space
    putchar(space);   // space
    putchar('\n');    // Line Feed == Line Break Character (LBC) == 10 ASCII code

    char a = 0x4C;  // L == 76 == 4C (16-я система)
    putchar(a);    // A
    putchar('\n');

    unsigned char b = 169;  // если код символа больше 127
    putchar(b);
    putchar('\n');

    char c, cc;
    c = getchar();  // !! В буфер записан код введенного символа плюс код символа '\n'
    printf("The ASCII code of %c is %d\n", c, c);
    getchar();  // перехватываем код символа '\n' из буфера. Если удалить эту строку, то в сс запишется '\n'
    cc = getchar();
    printf("The ASCII code of %c is %d\n", cc, cc);
    getchar();

    char n;
    while ((n = getchar()) != '\n') {  // в данном случае '\n' не запишется в буфер
        printf("%c %d %X", n, n, n);
        // putchar(n);
    }

    return 0;
}