//Given a sequence of integers. Find the sum of event and sum of odd elements with using a single repetition and print them separately. 

#include<stdio.h>

int main() {
    int n, i = 1;
    printf("Please enter the number of inputs: \n");
    scanf("%d", &n);
    int sum_odd = 0;
    int sum_even = 0;
    puts("Enter the values: ");
    for (int input; i<=n; i++){
        scanf("%d", &input);
        if (input%2 == 0) {
            sum_even = sum_even + input;

        } else if (input%2 != 0){
            sum_odd = sum_odd + input;
        }
    }
    printf("The sum of the even digits is %d and odd digits is %d", sum_even, sum_odd);
    return 0;
}