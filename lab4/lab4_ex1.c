#include<stdio.h>

int main() {
    int n;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];
    float sum = 0;
    float avg;
    puts("Insert the valuesof the array");
    for (int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);
        sum += arr[i];
    }
    avg = sum/n;
    for (int i = 0; i<n; i++){
        if(arr[i]<avg){
            printf("%lu ", arr[i]);
        }
    }
    return 0;
}