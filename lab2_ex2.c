#include<stdio.h>

int main() {
    int n, a, b, sum = 0, k;
    puts("Enter value of a and b");
    scanf("%d%d", &a, &b);
    puts("Enter the value of k");
    scanf("%d", &k);
    sum = 0;
    if(a>b) {
        int c = a;
        a = b;
        b = c;
} 
    n = a;
    while(n<=b) {
        if (n%k == 0) {
            sum = sum + n;
        }   
        n = n+1;  
    } 
    printf("Sum is %d", sum);
    return 0;
}