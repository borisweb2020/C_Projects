#include <stdio.h>

int main() {
    char s1[] = "abcdef";
    s1[0] = 'X';

    printf("%s\n", s1);  // Xbcdef

    /* s1++; // ERROR */
    /* s1 = "new string" // ERROR // only using strcpy */

    char *s2 = "abcdef";

    /* s2[0] = 'X'; // ERROR */

    printf("%s\n", s2);  // abcdef

    s2++;
    printf("%s\n", s2);  // bcdef

    s2 = "new string";
    printf("%s\n", s2);  // new string

    char *s3 = "a";

    printf("sizeof(s1): %ld\n", sizeof(s1));  // 7 bytes - size of an array chars
    printf("sizeof(s2): %ld\n", sizeof(s2));  // 8
    printf("sizeof(s3): %ld\n", sizeof(s3));  // 8 bytes - size of a pointer

    return 0;
}