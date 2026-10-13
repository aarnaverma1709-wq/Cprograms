#include <stdio.h>

int main() {
    int n, d, i;
    int count[10] = {0};
    int max = 0, ans = 0;

    scanf("%d", &n);

    if (n == 0)
        count[0] = 1;

    while (n > 0) {
        d = n % 10;
        count[d]++;
        n /= 10;
    }

    for (i = 0; i <= 9; i++) {
        if (count[i] > max) {
            max = count[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}