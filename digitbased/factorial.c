#include<stdio.h>
int main()
{
int n,result=1;
printf("enter the value of n:");
scanf("%d",&n);
while(n>0)
{result=result*n;
    --n;
}    
printf("%d",result);
}