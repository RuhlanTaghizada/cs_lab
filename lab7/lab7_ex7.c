#include<stdio.h>


int sumOfDigits(int n){
    if (abs(n) < 10){
        return 0;
    } 
    return n%10 + sumOfDigits(n/10);

} 

int main(){
    int n;
    puts("Enter the number to find the sum of its digits: ");
    scanf("%d", &n);
    if (n<0){
        n = -n;
    }
    printf("The sume of digits of number %d is %d", n, sumOfDigits(n));
    return 0;
}