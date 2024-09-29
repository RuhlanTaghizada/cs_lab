#include<stdio.h>
#include<math.h>

int main() {
    int i = 1, f =1;
    int n, p = 1;
    p = 2*p+1;
    float x, sum = 0, expression =0;
    puts("Enter the n: ");
    scanf("%d", &n);
    puts("Enter x: ");
    scanf("%f", &x);
    while (i<=n) {
        expression = pow(x, p);
        sum = asin(x + expression/f);
        p = p+2;
        f = f*i;
        i++;
    }
    printf("The sum is %f\n", sum);
    return 0;
}