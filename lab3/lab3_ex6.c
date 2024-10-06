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
     while (scanf("%d %d", &value, &value2)!= EOF ) {
        for (; i<=n; i++) {
            if(value<value2) {
                max = value2;
                min = value;
               } else{
                max = value;
                min = value2;
               }

            }
     }
    printf("The max height is %d and min height is %d", max, min);
    return 0;
}