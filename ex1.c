#include<stdio.h>

int main() {
    int x, exp1, exp2, exp3;

    scanf("%d", &x);
    exp1 = x*x - (2*x) +3;
    exp2 = x-5;
    exp3 = x*x+(2*x)-3;
    if (x>0) {
        printf("%d", exp1);
    } else if (x<0) {
        printf("%d", exp3);
    } else if (x == 0) {
        printf("%d", exp2);
    }
    return 0;
}