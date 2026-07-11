#include<stdio.h>
int main(){
    int n,r,sum=0,power=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    power=n*n;
    while(power){
        r=power%10;
        sum+=r;
        power/=10;
    }
    (sum==n)?printf("NEON number"):printf("not Neon number");
}
//(where the sum of digits of its square equals the number itself.)
//Square of 9 = 81
//Sum of digits = 8 + 1 = 9