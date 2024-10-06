#include<stdio.h>

int main() {
    int n;
    puts("Enter value for n ");
    scanf("%d", &n);
    int z = 1;
    for (int j = 1; j <= n; j++) {
        for (int sum, i = 1, l = z; i <= n;i++, l+=3){
            sum = l;
            printf("%d ", sum);

            
        }
        z++;
        puts("");
    }
    return 0;
}

