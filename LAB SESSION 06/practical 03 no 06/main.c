#include <stdio.h>

int main() {
    char uppercaseLetters[] = "ABC";
    char lowercaseLetters[] = "abc";
    char digits[] = "012";
    char symbols[] = "$*+/ ";

    printf("Integer equivalents of uppercase letters:\n");
    for (int i = 0; i < sizeof(uppercaseLetters) - 1; i++) {
        printf("%c: %d\n", uppercaseLetters[i], uppercaseLetters[i]);
    }

    printf("\nInteger equivalents of lowercase letters:\n");
    for (int i = 0; i < sizeof(lowercaseLetters) - 1; i++) {
        printf("%c: %d\n", lowercaseLetters[i], lowercaseLetters[i]);
    }

    printf("\nInteger equivalents of digits:\n");
    for (int i = 0; i < sizeof(digits) - 1; i++) {
        printf("%c: %d\n", digits[i], digits[i]);
    }

    printf("\nInteger equivalents of symbols:\n");
    for (int i = 0; i < sizeof(symbols) - 1; i++) {
        printf("%c: %d\n", symbols[i], symbols[i]);
    }

    return 0;
}
