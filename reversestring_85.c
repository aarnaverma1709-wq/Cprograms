#include <stdio.h>

int main() {
    char s[100], temp;
    int i, len = 0;

    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    for (i = 0; i < len / 2; i++) {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }

    s[len] = '\0';
    printf("%s", s);

    return 0;
}