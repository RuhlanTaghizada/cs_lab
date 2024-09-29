#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);
    int x1, x2, d;
    d = b*b - 4*a*c;
    x1 = ((-b + sqrt(d))/(2*a));
    x2 = ((-b - sqrt(d))/(2*a));
    if (d > 0) {
        printf("%d%d", x1, x2);
    } else if (d == 0){
        printf ("%d", x1);
    } else {
        printf("No roots");
    }
    return 0;
}