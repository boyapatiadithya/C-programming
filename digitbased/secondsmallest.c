#include <stdio.h>
int main() {
    int n, r, first= 9, second = 10;
    printf("enter the value of n:");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 10;
        if (r < first) {
            second=first;
            first= r;
        }
        else if (r > first && r < second)
            second = r;
        n /= 10;
    }
    printf("First smallest: %d\n", first);
    if (second == 10)
        printf("Second smallest doesn't exist");
    else
        printf("Second smallest: %d", second);

    return 0;
}
