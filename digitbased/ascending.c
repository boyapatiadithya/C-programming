#include <stdio.h>

int main() {
    int n, prev = 10, num, asc = 1;
    printf("enter the n value");
    scanf("%d", &n);

    while (n > 0) {
        num = n % 10;
        if (num > prev) {
            asc = 0;
            break;
        }
        prev = num;
        n /= 10;
    }

    if (asc)
        printf("Ascending");
    else
        printf("Not Ascending");

    return 0;
}