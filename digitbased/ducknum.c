#include<stdio.h>
int main(){
    int n, r, count=0, flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        if(r==0)
            count++;
        n/=10;
        flag=r;
    }
    (count>=1 && flag!=0)?printf("Duck number"):printf("not Duck number"); 
}
//(at least one zero but does not start with zero.)