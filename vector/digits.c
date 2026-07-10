// 1.digits print in given number order
// #include<stdio.h>
// int main(){
//     int n, r=0, rev=0, count=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(n>0){
//         r=n%10;
//         rev=rev*10+r;
//         n/=10;
//         count++;
//     }
//     while(rev>0 || count>0){
//         r=rev%10;
//         printf("%d\n",r);
//         rev/=10;
//         count--;
//     }
// }

//2.digits print in reverse order
// #include<stdio.h>
// int main(){
//     int num,digit;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num>0){
//         digit = num%10;
//         printf("%d ",digit);
//         num/=10;
//     }
// }

//3.print first and last numbers
// #include<stdio.h>
// int main(){
//     int num,digit, first=0, last=0, temp=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     last=num%10;
//     while(num>0){
//         digit=num%10;
//         num/=10;
//         first=digit;
//     }
//     printf("first: %d, last: %d", first, last );
// }


//4.Sum of digit for +ve and -ve
// #include<stdio.h>
// int main(){
//     int num, sum=0, digit=0;
//     scanf("%d", &num);
//     if(num<0){
//         num=-1*num;
//     }
//     while(num>0){
//         digit=num%10;
//         sum+=digit;
//         num/=10;
//     }
//     printf("sum: %d", sum);
//     return 0;
// }

//5.even and odd digit sum
// #include<stdio.h>
// int main(){
//     int num,digit;
//     printf("Enter a number: ");
//     scanf("%d",&num);

//     int even_sum=0,odd_sum=0;
//     while(num>0){
//         digit=num%10;
//         if(digit%2==0)
//             even_sum+=digit;
//         else
//             odd_sum+=digit;
//         num/=10;

//     }
//     printf("even sum : %d\n",even_sum);
//     printf("odd sum : %d",odd_sum);
// }


//6.product of digits
// #include<stdio.h>
// int main(){
//     int num,product=1,digit;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num){
//         digit=num%10;
//         product*=digit;
//         num/=10;
//     }
//     printf("Product of a number: %d", product);
// }

//7.count a digit
// #include<stdio.h>
// int main(){
//     int num,count=0,digit;
//     printf("Enter a num: ");
//     scanf("%d",&num);
//     while(num){
//         digit=num%10;
//         count++;
//         num/=10;
//     }
//     printf("No.of digits in a number: %d ", count);
// }


//8.First smallest number
// #include<stdio.h>
// int main(){
//     int num,digit;
//     static int small=9;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num){
//         digit=num%10;
//         if(digit<small)
//             small=digit;
//         num/=10;
//     }
//     printf("small number: %d",small);
// }


//9.second smallest number
// #include<stdio.h>
// int main(){
//     int num,digit,first=9,second=9, flag=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num){
//         digit=num%10;
//         if(digit<first){
//             second=first;
//             first=digit;
//             flag=1;
//         }else if(digit>first && digit<second){
//             second=digit;
//             flag=1;
//         }
//         num/=10;
//     }
//     printf("first smallest number : %d\n",first);
//     if(flag==1)
//         printf("second smallest number : %d\n",second);
//     else
//         printf("error");
// }


//10. First highest number
// #include<stdio.h>
// int main(){
//     int num;
//     static int large,digit;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num>0){
//         digit=num%10;
//         if(digit>large)
//             large=digit;
//         num/=10;
//     }
//     printf("first highest number: %d",large);
// }


//11.second largest number 
// #include<stdio.h>
// int main(){
//     int num,digit,first=0,second=0;
//     printf("enter a value: ");
//     scanf("%d",&num);
//     while(num){
//         digit=num%10;
//         if(digit>first){
//             second=first;
//             first=digit;
//         }else if(digit<first && digit >second){
//             second=digit;
//         }
//         num/=10;

//     }
//     printf("second highest value: %d\n", second);
//     printf("first highest value: %d", first);
// }


//12.Neon Number(where the sum of digits of its square equals the number itself.)
//Square of 9 = 81
// Sum of digits = 8 + 1 = 9
// #include<stdio.h>
// int main(){
//     int num,digit, sum=0, power=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     power=num*num;
//     while(power){
//         digit=power%10;
//         sum+=digit;
//         power/=10;
//     }
//     (sum==num)?printf("NEON number"):printf("not Neon number");
// }

//13.Spy Number(whose sum of digits equals the product of digits.)
// #include<stdio.h>
// int main(){
//     int num,digit, sum=0, product=1, temp=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num>0){
//         digit=num%10;
//         sum+=digit;
//         product*=digit;
//         num/=10;
//     }
//     (sum==product)?printf("spy number"):printf("not spy number");
// }
    
//14.Duck Number(at least one zero but does not start with zero.)
// #include<stdio.h>
// int main(){
//     int num,digit, count=0, flag=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num>0){
//         digit=num%10;
//         if(digit==0)
//             count++;
//         num/=10;
//         flag=digit;
//     }
//     (count>=1 && flag!=0)?printf("Duck number"):printf("not Duck number"); 
// }


//15.sum of digit based code
/*#include<stdio.h>
int digit_sum(int num);
int main(){
    for(int i=10;i<=100;i++){
        int result=digit_sum(i);
        if(result>=10){
            digit_sum(result);
            if(digit_sum(result)==7)
                printf("%d ", i);
        }else if(result<10 && result==7)
            printf("%d ",i);
    }
    
}
int digit_sum(int num){
    int sum=0,digit;
    while(num>0){
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    return sum;
}*/

