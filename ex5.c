#include<stdio.h>
#include<stdlib.h>

int main() {
    int x;

    printf("Enter a three-digit number: ");
    
    scanf("%d", &x);
    x = abs(x);
    
    int lastDigit = x % 10; 
    int midDigit = (x / 10) % 10;
    int firstDigit = x / 100; 
    if (lastDigit > midDigit && lastDigit>firstDigit) {
        printf("%d", lastDigit);
    } else if (midDigit>lastDigit && midDigit>firstDigit) {
        printf("%d", midDigit);
    } else if (firstDigit>lastDigit && firstDigit>midDigit) {
        printf("%d", firstDigit);
    }
    return 0;
}