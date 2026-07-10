#include<stdio.h>
int main(){
    int n,r,first=0, last=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    last=n%10;
    while(n>0){
        r=n%10;
        n/=10;
        first=r;
    }
    printf("first: %d, last: %d", first, last );
}