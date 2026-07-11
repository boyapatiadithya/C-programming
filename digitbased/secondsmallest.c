#include <stdio.h>
int main() {
    int n, r, fs= 9, ss = 10;
    printf("enter the value of n:");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 10;
        if (r < fs) {
            ss=fs;
            fs= r;
        }
        else if (r > fs && r < ss)
            ss = r;
        n /= 10;
    }
    printf("First smallest: %d\n", fs);
    if (ss == 10)
        printf("Second smallest doesn't exist");
    else
        printf("Second smallest: %d", ss);

    return 0;
}
