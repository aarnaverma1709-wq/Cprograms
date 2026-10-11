#include <stdio.h>

int main()
{
    int n, original, digit, rev = 0;

    scanf("%d", &n);
    original = n;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (original == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}