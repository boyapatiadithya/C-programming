#include <stdio.h>

int main() {
    int n, r, first = 9, second = 10, third = 10;

    scanf("%d", &n);

    while (n > 0) {
        r = n % 10;

        if (r < first) {
            third = second;
            second = first;
            first = r;
        }
        else if (r > first && r < second) {
            third = second;
            second = r;
        }
        else if (r > second && r < third) {
            third = r;
        }
        n /= 10;
    }
    if (third == 10)
        printf("3rd smallest doesn't exist");
    else
        printf("3rd smallest = %d", third);

    return 0;
}