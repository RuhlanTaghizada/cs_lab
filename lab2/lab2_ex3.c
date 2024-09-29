#include<stdio.h>

int main() {
    float i = 1, x, sum = 0;
    int n;
    puts("Enter the n");
    scanf("%d", &n);
    while (i<=n) {
        x = 1/i;
        sum = sum + x;
        i = i+1;
    }
    printf("The sum is %.3f\n", sum);
    return 0;
}