#include <stdio.h>

int main() {
    char s[100];
    int i, len = 0, flag = 1;

    scanf("%99s", s);

    while (s[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}