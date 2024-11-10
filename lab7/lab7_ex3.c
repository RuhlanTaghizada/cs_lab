#include<stdio.h>
#include<stdlib.h>


int p(int a, int b){ //a is a base and b is the power
    float p = 1;
    int b2 =b;
    b = abs(b); 
    float tmp;
    if (a == 0){
        p = 0;
    } else if( b == 0 ){
        p = 1;
    } 
    for (int i = 1; i<=b; i++){
        p *=a;
    }
    return p; //inittially the idea was to have a if...else... statement which would either return p, or return 1/p
              //but in that case the overall function would not have a return statement, which would assume it to be a void function.
              //since the function is not void, the solution for the cases of b<0 is in the main() function, where if... else... statement was used
}

int main(){
    int a, b;
    puts("Enter the number a and b");
    scanf("%d %d", &a, &b);
    if(b<0){
        printf("%f", (float)1/p(a,b)); //we use type casting su that we could return the float value 
    } else {
        printf("%d", p(a,b));
    }
    return 0;
}