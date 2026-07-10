#include <stdio.h>

int main()
{
    int min, max, i, j, count;

    printf("Enter value of min: ");
    scanf("%d", &min);
    printf("Enter value of max: ");
    scanf("%d", &max);

    for(i = min; i <= max; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }

    return 0;
}