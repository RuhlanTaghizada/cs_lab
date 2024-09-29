#include<stdio.h>

int main() {
    int i = 2, Num_one = 0,Num_two = 1, Num_asked;
    int n;
    puts("Enter the n: ");
    scanf("%d", &n);
    if (n == 1) {
        Num_asked = Num_two;
    }
    while (i<= n) {
         if (n>1) 
         {
            Num_asked = Num_one + Num_two;
            Num_one = Num_two;
            Num_two = Num_asked;
        } 
        i++;
    }
    printf("The Fibonacci number asked is %d\n", Num_asked);
    return 0;
}