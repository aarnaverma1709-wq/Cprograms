#include <stdio.h>

int main() {
    char s[200], ch;
    int i, vowels = 0, consonants = 0;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        ch = s[i];

        if (ch >= 'A' && ch <= 'Z')
            ch += 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}