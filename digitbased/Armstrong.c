#include<stdio.h>
#include<math.h>
int main()
{
int n,r,armstrong,sum=0;
printf("enter the value of n:");
scanf("%d",&n);
armstrong=n;
while(n>0)
{
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
}
if(armstrong == sum)
printf("armstrong");
else 
printf("not armstrong");
}