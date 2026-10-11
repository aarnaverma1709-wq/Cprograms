#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 1, p, middle;

    scanf("%d", &n);

    if (n < 10)
    {
        printf("%d", n);
        return 0;
    }

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;
    p = digits / 10;
    middle = (n % digits) / 10;

    printf("%d", last * digits + middle * 10 + first);

    return 0;
}