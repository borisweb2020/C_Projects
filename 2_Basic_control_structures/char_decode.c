#include <stdio.h>

void encode();
void decode();

int main(int argc, char *argv[]) {
    char c = 76;
    printf("%d\n", c);  // 76
    printf("%c\n", c);  // L
    printf("%x\n", c);  // 4c
    printf("%X\n", c);  // 4C

    char a = 0x4A;
    printf("%d\n", a);  // 74
    printf("%c\n", a);  // J
    printf("%x\n", a);  // 4a
    printf("%X\n", a);  // 4A

    int d;
    scanf("%d", &d);    // 71
    printf("%c\n", d);  // G
    int x;
    scanf("%X", &x);    // 47
    printf("%c\n", x);  // G

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
    char c, space;
    while (1) {
        scanf("%c%c", &c, &space);
        if (space == '\n') {
            printf("%X", c);
            break;
        }
        if (space != ' ') {
            printf("n/a");
            break;
        }
        printf("%X ", c);
    }
}

void decode() {
    int x;
    char c;
    while (1) {
        scanf("%X", &x);
        c = getchar();
        if (x > 0x7A || x < 0x30) {
            printf("n/a");
            break;
        }
        if (c == '\n') {
            printf("%c", x);
            break;
        }
        if (c != ' ') {
            printf("n/a");
            break;
        }
        printf("%c ", x);
    }
}
