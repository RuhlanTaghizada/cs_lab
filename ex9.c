#include<stdio.h>

int main() {
    int x;
    printf("Enter the three digit number: \n");
    scanf("%d", &x);
    int lastDigit = x % 10; 
    int midDigit = (x / 10) % 10;
    int firstDigit = x / 100; 
    int num1 = lastDigit*firstDigit*midDigit;
    int num2 = lastDigit*midDigit;
    int num3 = midDigit*firstDigit;
    int num4 = firstDigit*lastDigit;
    if (num1 >num2 && num1>num3 && num1>num4) {
        printf("%d", num1);
    } else if (num2 > num1 && num2 > num3 && num2 > num4 ){
        printf("%d", num2);
    } else if (num3 > num1 && num3> num2 && num3>num4 ) {
        printf("%d", num3);
    } else {
        printf("%d", num4);
    }
    return 0;
}