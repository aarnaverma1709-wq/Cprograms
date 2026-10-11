#include <stdio.h>

int main()
{
    int a, b, x, y, r, gcd;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    gcd = x;

    if (a == 0 || b == 0)
        printf("0");
    else
        printf("%d", (a / gcd) * b);

    return 0;
}