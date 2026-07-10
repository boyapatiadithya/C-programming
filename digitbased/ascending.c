#include <stdio.h>

int main() {
    int n, prev = 10, r, asc = 1;
    printf("enter the n value");
    scanf("%d", &n);

    while (n > 0) {
        r = n % 10;
        if (r > prev) {
            asc = 0;
            break;
        }
        prev = r;
        n /= 10;
    }

    if (asc)
        printf("Ascending");
    else
        printf("Not Ascending");

    return 0;
}