#include<stdio.h>
int main()
{
    int n,r,min=9; 
    // static int small=9;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        if(r<min)
            min=r;
        n/=10;
    }
    printf("small number: %d",min);
}