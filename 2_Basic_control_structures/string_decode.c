#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int encode(char *buffer, char *output, int length);
int decode(char *buffer, int length);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <0 for encoding or 1 for decoding>\n", argv[0]);
        return 1;
    }

    int mode = atoi(argv[1]);
    char buffer[256], output[256];

    //*** let's enter "w o r l d"
    if (fgets(buffer, sizeof(buffer), stdin)) {  // w32o32r32l32d32\n\0\0\0...
        int length = strlen(buffer);             // == 11
        if (buffer[length - 1] == '\n') {
            buffer[length - 1] = '\0';  // == now, length of buffer == 10
        }
        length = strlen(buffer);  // == 10
        if (mode == 0) {
            encode(buffer, output, length);
        } else if (mode == 1) {
            decode(buffer, length);
        } else {
            printf("Wrong mode");
        }
        printf("\n");
    } else {
        printf("Input error\n");
    }

    return 0;
}

int encode(char *buffer, char *output, int length) {
    for (int i = 0; i < length; i++) {
        output[i] = buffer[i];
        if (i % 2 != 0) {
            if (buffer[i] != 32) {
                printf("Needed a space between symbols");
                return 1;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            printf("%X ", output[i]);
        }
    }

    return 0;
}

int decode(char *buffer, int length) {  // [45 5E 70 3A]
    int space = 2;

    long int num[256];
    int n = 0;

    char str[4] = "0x";  // [0x45]
    int j = 2;

    for (int i = 0; i < length; i++) {
        if (i == space) {
            if (buffer[i] != 32) {
                printf("Needed a space between symbols");
                return 1;
            }
            space += 3;
            continue;
        }
        str[j] = buffer[i];
        j++;
        if (j == 4) {
            num[n] = strtol(str, NULL, 16);
            n++;
            j = 2;
        }
    }

    for (int i = 0; i < n; i++) {
        char c = num[i];
        printf("%c ", c);
    }

    return 0;
}