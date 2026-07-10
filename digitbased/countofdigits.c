#include<stdio.h>
int main(){
    int n,count=0,r;
    printf("Enter a num: ");
    scanf("%d",&n);
    while(n){
        r=n%10;
        count++;
        n/=10;
    }
    printf("No.of digits in a number: %d ", count);
}