#include<stdio.h>
int main()
{
    int n;
    static int large,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>large)
            large=r;
        n/=10;
    }
    printf("first highest number: %d",large);
}