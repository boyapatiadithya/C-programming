#include<stdio.h>
int main()
{
int n,pal,r,rev=0;
printf("enter the value of n:");
scanf("%d",&n);
pal=n;
while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
if (pal==rev)
{
printf("%d is palindrome",pal);
}
else
{
printf("%d is not a palindrome",pal);
}
}