#include <stdio.h>

int main()
{
    int n, temp, digits = 0, digit, i;
    int sum = 0, power;

    scanf("%d", &n);

    temp = n;

    do
    {
        digits++;
        temp = temp / 10;
    } while (temp > 0);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
            power = power * digit;

        sum = sum + power;
        temp = temp / 10;
    }

    if (n == 0)
        sum = 0;

    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}