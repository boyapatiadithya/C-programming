#include<stdio.h>
int main()
{
int n,a=0,b=1,c;
printf("enter the value of n:");
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
while(n>2){
c=a+b;
a=b;
b=c;
printf("%d",c);
n--;
}
}