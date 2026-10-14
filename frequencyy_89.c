#include <stdio.h>

int main() {
    char s[100], ch;
    int i, count = 0;

    scanf("%99s %c", s, &ch);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch)
            count++;
    }

    printf("%d", count);

    return 0;
}