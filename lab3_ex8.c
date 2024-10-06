//Given a positive integer n. Print a square of size n consisting of the numbers as follows:
//First line from 1 to n, second from n+1 to 2n, etc:

#include<stdio.h>

int main() {
    int n;
    puts("Enter value for n ");
    scanf("%d", &n);
    int z = 1;
    for (int j = 1; j <= n; j++) {
        for (int sum, i = 1; i <= n;i++){
            sum = z;
            printf("%d ", sum);
            z++;
        }
        puts("");
    }
    return 0;
}
