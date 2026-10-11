#include <stdio.h>

int main()
{
    int n, temp, digit, i, fact, sum = 0;
    scanf("%d", &n);

    temp = n;

    do
    {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++)
            fact = fact * i;

        sum = sum + fact;
        temp = temp / 10;
    } while (temp > 0);

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}