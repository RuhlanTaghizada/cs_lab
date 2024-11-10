#include<stdio.h>


int factorial(int n){
    int f = 1;
    if (n==0){
        return 1;
    }
    for (int i = 1; i<=n; i++){
        f = f*i;
        }
    return f;

}

int main(){
    int n;
    puts("Enter the number to find the factorial of");
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}