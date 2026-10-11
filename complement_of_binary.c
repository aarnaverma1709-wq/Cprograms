#include <stdio.h>

int main()
{
    long long n, digit, result = 0, place = 1;
    scanf("%lld", &n);

    if (n == 0)
    {
        printf("1");
        return 0;
    }

    while (n > 0)
    {
        digit = n % 10;

        if (digit == 0)
            result = result + place;
        else if (digit != 1)
        {
            printf("Invalid binary number");
            return 0;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("%lld", result);

    return 0;
}