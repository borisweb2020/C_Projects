#include <stdio.h>
#include <string.h>

void change_filename(char s_1[]);

int main() {
    char string_1[30] = "I can, ";
    char string_2[] = "I want, ";
    char string_3[] = "I must!";

    strcat(string_1, string_2);  // string_1 - receiver <-- string_2 - source
    strcat(string_1, string_3);
    puts(string_1);

    char string_4[20];
    printf("Input filename: ");
    if (fgets(string_4, sizeof(string_4), stdin) != NULL) {
        int length = strlen(string_4);
        if (string_4[length - 1] == '\n') {
            string_4[length - 1] = '\0';
        }
        change_filename(string_4);
        length = strlen(string_4);
        printf("%s %d %lu\n", string_4, length, sizeof(string_4));
    } else {
        printf("Input Error");
    }

    return 0;
}

void change_filename(char s_1[]) {
    int n = 0;  // номер символа
    while (s_1[n] != '.' && s_1[n] != '\0') {
        n++;
    }

    if (s_1[n] == '.') {
        strcpy(s_1 + n, ".exe");  // меняем расширение
    } else {
        strcat(s_1, ".exe");  // иначе добавляем расширение
    }
}
