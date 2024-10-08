#include<stdio.h>

int main() { 

    int sum = 0, i = 1;
    int n, value, value2;
    int max, min;
    printf("Enter the number of inputs:\n ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n;
    }

    printf("Enter the values: \n");
    printf("The max height is %d and min height is %d", max, min);
    return 0;
}