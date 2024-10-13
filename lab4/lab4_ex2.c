#include<stdio.h>

int main() {
    int n;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];
    puts("Insert the valuesof the array");
    for (int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);
    }
    for (int i = 0; i<n; i++){
        if (i == 0){
            if(arr[i]< arr[i+1]) {
                printf("%lu ", arr[i]);
        } else if (i == n-1){
            if(arr[n-1]<arr[n-2]){
                 printf("%lu ", arr[n-1]);
             }
            }
        } else if((arr[i]<arr[i+1])&& (arr[i]<arr[i-1])) {
            printf("%lu ", arr[i]);
        }
    }
    return 0;
}