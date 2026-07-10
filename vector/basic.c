//1.Print a binary number all 32 bits
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a Number: ");
//     scanf("%d", &num);
//     for(int i=31;i>=0;i--){
//         printf("%d", (num>>i)&1);
//     }
// }

//2.Print a binary number
// #include<stdio.h>
// int main(){
//     int num,bit, start=0;
//     printf("Enter a Number: ");
//     scanf("%d", &num);
//     for(int i=31;i>=0;i--){
//         bit = (num>>i)&1;
//         if(bit==1)
//             start=1;
//         if(start==1)
//             printf("%d", bit);
//     }

// }

//3.Float to binary
/*#include<stdio.h>
int main(){
    float num=10.5;
    int *ptr = (int*)&num;
    for(int i=31;i>=0;i--){
        printf("%d",(*ptr>>i)&1);
        if(i%8==0)
            printf(" ");
    }

}*/


//4.clear, set, toggle, statu of a bit
/*#include<stdio.h>
void binary_number(int num);
void number(int num);
int main(){
    int num, bit_pos, option;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Enter a option(S,C,T,Se): ");
    scanf("%d", &option);
    printf("Enter a bit position: ");
    scanf("%d", &bit_pos);
    printf("Before make operation\n");
    binary_number(num);
    switch(option){
        case 1: num |=1<<bit_pos;
                printf("SET a bit\n");
                printf("After make operation\n");
                binary_number(num);
                number(num);
                break;
        case 2: num &=~(1<<bit_pos);
                printf("CLEAR a bit\n");
                printf("After make operation\n");
                binary_number(num);
                number(num);
                break;
        case 3: num ^=1<<bit_pos;
                printf("TOGGLE a bit\n");
                printf("After make operation\n");
                binary_number(num);
                number(num);
                break;
        case 4: num =(num>>bit_pos)&1;
                printf("STATUS a bit\n");
                printf("After make operation\n");
                binary_number(num);
                number(num);
                break;
    }
}
void binary_number(int num){ 
    for(int i=31;i>=0;i--)
        printf("%d", (num>>i)&1);
    printf("\n");
}
void number(int num){
    printf("number: ");
    printf("%d",num);
}*/

//5.Print reverse of bits
/*#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    for(int i=0;i<=31;i++){
        printf("%d", (num>>i)&1);
    }
}*/



//6.print longest 1's in binary
/*#include<stdio.h>
int main(){
    int num, start_index=0,end_index=0, temp_start=0, temp_end=0, count=0,max=0, flag=0;
    printf("Enter your number: ");
    scanf("%d", &num);
    for(int i=31;i>=0;i--)
    {
        if((num>>i)&1){
            if(flag==0)
                temp_start=i;
            flag=1;
            count++;
        }
        else if(flag==1){
            temp_end=i+1;
            if(count>max){
                max=count;
                start_index=temp_start;
                end_index=temp_end;
            }
            count=0;
            flag=0;
        }
    }

    if(flag==1 && count>max){
        max=count;
        start_index=temp_start;
        end_index=0;
    }

    for(int i=start_index;i>=end_index;i--)
        printf("%d ",(num>>i)&1);  
}*/


