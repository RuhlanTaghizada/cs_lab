#include<stdio.h>



int isEven(int n){
    int isEven;
    if(n%2 == 0){
        isEven = 1;
    } else{
        isEven = 0;
    }
    return isEven;
}
int main(){
    int n;
    puts("Enter the number");
    scanf("%d", &n);
    printf("%d", isEven(n));
    return 0;
}