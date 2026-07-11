#include<stdio.h>
int main(){
    int n, r, sum=0, product=1, temp=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum+=r;
        product*=r;
        n/=10;
    }
    (sum==product)?printf("spy number"):printf("not spy number");
}
//(whose sum of digits equals the product of digits.)
//n=9-->3*3