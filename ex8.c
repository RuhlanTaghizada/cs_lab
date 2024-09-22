#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if (a+b >c && a+c>b && c+b>a) {
        printf( "yes");
    } else {
        printf("no");
    }
    return 0;
}