#include <stdio.h>

int main()
{
    int i, j, n, count, prime = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 2; prime < n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
        {
            printf("%d ", i);
            prime++;
        }
    }

    return 0;
}