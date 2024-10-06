//  Given some triplets of integers, a, b, c until EOF . Find out integers in the range
// [a, b] that are divisible by c without remainder.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter values of a b c: \n");
    if (a>b) {
        int c;
        c =a;
        a = b;
        b = c;
    }
    while (scanf("%d%d%d", &a,&b,&c)!=EOF) {
        for(;a<=b; a++ ){
            if (a%c == 0){
                printf("%d \n", a);
            }
            }
        }
    return 0;
}
