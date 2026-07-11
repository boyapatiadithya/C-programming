#include <stdio.h>

int main() {
    int n, r, first = 0, second = -1;
    printf("enter the n value:");
    scanf("%d", &n);

    while (n > 0) 
    {
        r = n % 10;

        if (r > first) 
        {
            second = first;
            first = r;
        }
        else if (r < first && r > second) 
        {
            second = r;
        }

        n /= 10;
    }

    if (second == -1)
        printf("Second largest doesn't exist");
    else
        printf("Second largest = %d", second);

    return 0;
}