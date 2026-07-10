#include <stdio.h>

int main() {
    int n, sum = 0, r, sign = 1;
    printf("enter the value of n:");
    scanf("%d", &n);

    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while (n > 0) {
        r = n % 10;
        sum += r;
        n /= 10;
    }

    printf("sum: %d", sign * sum);

    return 0;
}