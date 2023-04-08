#include <stdio.h>

int main() {
    puts("Hello World"); // равносильно printf("Hello World\n");

    char *name = "Mickle Scott";
    puts(name);

    char str[10];
    fgets(str, sizeof(str), stdin); // считает не более 9 символов, т.к. последний для \0
    printf("Inputted string: %s\n", str);

    char full_name[15];
    printf("Enter you name: ");
    if (fgets(full_name, sizeof(full_name), stdin) != NULL) {
        printf("Your name is %s\n", full_name);
    } else {
        printf("Critical Error\n");
    }

    char nickname[15];
    char *result;
    result = fgets(nickname, sizeof(nickname), stdin);
    if (result) {
        printf("Your nickname: %s\n", result);
    } else {
        printf("Input Error");
    }

    return 0;
}

/*
int puts(const char *s) - принимает указатель на строку символов. Возвращает неотрицательное число в случае успешного выполнения,
а если произойдет ошибка, то возвращается значение EOF.
Автоматически добавляет символ \n, также записывает данные в буфер вывода stdout, поэтому многократный вызов функции 
может привести к вытеснению ранее записанных данных.
Выводит символы переданной строки, пока не дойдет до символа \0 (NULL)

Функция gets() - чтение строки из stdin. Считывает входные данные да тех пор пока не встретит символ \n или EOF, и сохраняет введенные данные
в буфере.
Отсутствует проверка на переполение буфера, что делает ее уязвимой для атак. Поэтому ее лучше НЕ ИСПОЛЬЗОВАТЬ.
    char str[20];
    gets(str);
    printf("Inputted string: %s", str);
Если пользователь введет строку более 20 символов, произойде переполнение буфера, что приведет к неккоректной работе программы.
Лучше использовать безопасный вариант: fgets() - file get string. Она может читать строку из файла и из stdin

Функция fgets():
char *fgets(char *str, int count, FILE *stream)
    char *str - строка, в которую производится считывание
    int count - сколько символов необходимо считывать
    FILE *stream - файловый поток из которого производится считывание. Можно  и консольный ввод stdin
Последний символ зарезервирован для \0 поэтому считает не более 9 символов!!
А вот если символов буде менее 9, то в массив str попадет символ \n, который нужно заменить на \0 !!!
Если считывание прошло неуспешно, то функция возвращает NULL
*/