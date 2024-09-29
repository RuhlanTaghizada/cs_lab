// Given an integer. Remove the zeros from it and print the resulting number.

#include<stdio.h>

int main() {
    int n, count = 1, value = 0;
    puts("Enter the number: ");
    scanf("%d", &n);
    while(n != 0){
        int d; 
        d = n%10;
        n = n/10;

        if (d != 0) {
            value = value+ d *count;
            count = count * 10;
        }

    }
    printf("%d", value);
    return 0;
}