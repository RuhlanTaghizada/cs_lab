#include<stdio.h>

int main() { 

    float sum = 0;
    int n, nCopy = 0;
    printf("Enter the number: \n ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n;
    }

    while (n !=1 ) 
    {       
        if (n%2 == 0) {
            nCopy = n/2;
            printf("%d ", nCopy);
        } else {
            nCopy = 3*n+1;
            printf("%d ", nCopy);
        }
        n = nCopy;
    }
    return 0;
}