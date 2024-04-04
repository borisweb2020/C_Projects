#include <stdio.h>
void encode();
void decode();

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: %s <0 for encoding or 1 for decoding>\n", argv[0]);
        return 1;
    }

    char mode = *argv[1];

    if (mode == 48) {
        encode();
    } else if (mode == 49) {
        decode();
    } else {
        printf("The wrong mode entered");
    }

    return 0;
}

void encode() {
    printf("Enter characters separeted by a space:\n");

    char ch;
    char space;
    // char enter;
    // int condition = 1;


    if (scanf("%c %c", &ch, &space) == 2) {
      printf("%c %c", ch, space);
    } else {
      printf("n/a\n");
    }
}

void decode() {
  printf("Enter two-character strings separated by a space:\n");
}