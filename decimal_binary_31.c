#include <stdio.h>

int main()
{
    int n, rem, place = 1, bin = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
    }
    else
    {
        while (n > 0)
        {
            rem = n % 2;
            bin = bin + rem * place;
            place = place * 10;
            n = n / 2;
        }

        printf("%d", bin);
    }

    return 0;
}