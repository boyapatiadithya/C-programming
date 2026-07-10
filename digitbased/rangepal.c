#include <stdio.h>
int main()
{
    int i, n, r, rev=0, pal, min, max;
    printf("enter the minimum value:");
    scanf("%d", &min);
    printf("enter the maximum value:");
    scanf("%d", &max);
    printf("palindromes between %d and %d are:\n", min, max);
    for (i= min;i<= max; i++)
    {
        n = i;
        pal = n;
        rev = 0;
        while (n != 0)
        {
            r = n % 10; // get last digit
            rev = rev * 10 + r; //build reversed number
            n = n / 10; //remove last digit
        }
    if (pal == rev)
    {
        printf("%d\n", pal);
    }
   }
}