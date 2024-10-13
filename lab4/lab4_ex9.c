#include<stdio.h>

int main(){
    int n, z = 0;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];
    arr[0] = 0;
    arr[1] = 1;
    int x, y;
    puts("Insert the range of the Fibonacci numbers: ");
    scanf("%d%d", &x,&y);
    if (x>y) {
        int c;
        c = x;
        x = y;
        y = c;
    }
    for (int i = 2; i<n; i++){
        arr[i] = arr[i-1] +arr[i-2];
        if ((arr[i] <= y) && (arr[i]>=x)){
            printf(">(%lu)< ", arr[i]);
            z++;
        } 
    }
    if(z == 0) {
        puts("There is no Fibonacci number in this sequence ");
    }

    return 0;
}