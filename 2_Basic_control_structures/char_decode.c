#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Функция кодирования одного символа:
void encode(const char *input, char *output);

// Функция декодирования одного символа:
void decode(const char *input, char *output);

int main(int argc, char *argv[]) {
    // Определяем указан ли параметр:
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <0 for encoding or 1 for decoding>\n", argv[0]);
        return 1;
    }
    // Определение режима работы программы:
    int mode = atoi(argv[1]);
    // if (mode != 0 && mode != 1) {
    //     printf("Invalid mode. Use 0 for encoding or 1 for decoding.\n");
    //     return 1;
    // }

    char input[4096], output[8192];

    if (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = '\0';

        if (mode == 0) {
            encode(input, output);
        } else if (mode == 1) {
            decode(input, output);
        } else {
            fprintf(stderr, "Invalid mode. Use 0 for encoding or 1 for decoding.\n");
            return 1;
        }
        printf("%s\n", output);
        return 0;
    } else {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
}

void encode(const char *input, char *output) {
    while (*input) {
        sprintf(output, "%02X", (unsigned char) *input);
        output += 2;
        input++;
    }
}

void decode(const char *input, char *output) {
    while (*input) {
        char buf[3] = {input[0], input[1], '\0'};
        *output = (char) strtol(buf, NULL, 16);
        output++;
        input += 2;
    }
}