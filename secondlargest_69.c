#include <stdio.h>

int main() {
    int a[100], n, i;
    int largest, second, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] < largest) {
            if (!found || a[i] > second) {
                second = a[i];
                found = 1;
            }
        }
    }

    if (found)
        printf("%d", second);
    else
        printf("-1");

    return 0;
}