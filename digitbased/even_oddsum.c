#include<stdio.h>
int main(){
    int n,r,s1=0,s2=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        if(r%2==0)
            s2+=r;
        else
            s1+=r;
        n/=10;

    }
    printf("even sum: %d\n",s2);
    printf("odd sum: %d\n",s1);
}
