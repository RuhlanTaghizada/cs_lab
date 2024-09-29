#include<stdio.h>

int main() { 

    float sum = 0, i = 0;
    int n;
    printf("Enter the number of inputs:\n ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n;
    }

    printf("Enter the values: \n");
    while (n >= i) 
    {       
        float value;
        i = value;
        scanf("%f",&value);
        sum = sum + value;
        i++;
    }
    printf("The number of inputs is %d and the sum of inputs is %f", n, sum);
    return 0;
}
