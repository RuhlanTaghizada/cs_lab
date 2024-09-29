#include<stdio.h>

int main() {
    int d, n, sum = 0;
    puts("Enter the value of n: ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n;
    }
    while (n>0) {
        d = n%10;
        n =n/10;
        if (d%2 == 0){
            sum = sum+d;
        }
    }
    printf("The intial number is %d and the sum of even digits is %d", n, sum );
    return 0;
}