#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
if(n%i==0)
count=count+1;
    }if(count==2)
    printf("%d is prime no",n);
    else 
    printf("%d is not a prime no",n);   // (count==1)?printf("prime"):printf("not prime");
}