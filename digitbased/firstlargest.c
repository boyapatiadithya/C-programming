#include<stdio.h>
int main()
{
    int n,r,first=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>first)
        first=r;
        n/=10;
    }
    printf("first highest number: %d",first);
}