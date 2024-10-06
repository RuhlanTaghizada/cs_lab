#include<stdio.h>

int main() {
    int i = 1, x, sum = 0, product = 1;
    int n;
    puts("Enter the n");
    scanf("%d", &n);
    for (; i<=n; i++){
        x = 2*i+1;
        sum = sum + x;
        product = product * x;
    }
    printf("The sum is %d\n", sum);
    printf("The product is %d", product);
    return 0;
}