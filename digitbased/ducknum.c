#include<stdio.h>
int main(){
    int num,digit, count=0, flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        if(digit==0)
            count++;
        num/=10;
        flag=digit;
    }
    (count>=1 && flag!=0)?printf("Duck number"):printf("not Duck number"); 
}
//(at least one zero but does not start with zero.)