#include<stdio.h>
int main(){
    int n, r=0, rev=0, count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
        count++;
    }
    while(rev>0 || count>0){
        r=rev%10;
        printf("%d\n",r);
        rev/=10;
        count--;
    }
}