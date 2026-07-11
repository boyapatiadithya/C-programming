#include<stdio.h>
int main() {
    int n, r, sum = 0, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0)
    {
        r = n % 10;
        sum += r;
        product *= r;
        n /= 10;
    }
    (sum == product) ? printf("Spy Number"): printf("Not Spy Number");
    return 0;
}
//(whose sum of digits equals the product of digits.)
//(Number:22	Sum of digits:2+2;	Product of digits:2*2)	