#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("%lld", fact);
    }

    return 0;
}