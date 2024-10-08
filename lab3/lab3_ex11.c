#include<stdio.h>
#include<math.h>

int main() {
    int n, nCopy, nCopy2, sum = 0, c = 0;
    puts("Enter the  number: ");
    scanf("%d", &n);
    nCopy = n;
    nCopy2 = n;
    while (n>0) {
        n/= 10;
        c++;
    }
    while (nCopy>0) {
        int d;
        d = nCopy%10;
        sum += pow(d, c);
        nCopy/=10;
    }
    if (nCopy2 != sum) {
        printf("The number is not Armstrong's number");
    } else {
        printf("The number is Armstrong's number");
    }
    return 0;
}