#include<stdio.h>

int main() {
    int x = 64;
    int n;
    scanf("%d", &n);
    int sum = 0; 
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i<=n ;i++){
            if (i%2!=0){
                printf("%d ", i);
            }
            else{
                printf("%c ", i+64);
        }
        }
        puts("");
    }
    return 0;
}
