#include<stdio.h>
int main(){
    int n,prod,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a number: ");
    scanf("%d",&prod);
    while(n!=0)
    {
        r=n%10;
        prod*=r;
        n/=10;
    }
    printf("Product of a number: %d", prod);
}