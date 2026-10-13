#include <stdio.h>

int main() {
    int a[10][10], n, m, i, j, flag = 1;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    if (n != m) {
        printf("False");
        return 0;
    }

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j])
                flag = 0;

    if (flag)
        printf("True");
    else
        printf("False");

    return 0;
}