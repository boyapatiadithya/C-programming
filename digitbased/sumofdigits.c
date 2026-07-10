#include<stdio.h>
int main(){
    int n, sum=0,r=0;
    printf("enter the value of n:");
    scanf("%d", &n);
    while(n>0){
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("sum: %d", sum);
    return 0;
}