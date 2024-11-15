#include<stdio.h>


int findSum(int arr[], int length){
    int sum = 0;
    if (length ==0){
        return 0;
    }
    return findSum(arr, length - 1) +arr[length-1];
}


int main(){
    int length;
    puts("Enter the length of the array");
    scanf("%d", &length);
    int arr[length];
    for(int i = 0; i<length; i++){
        printf("Enter the %d of the array: \n", i);
        scanf("%d", &arr[i]);
    }
    printf("%d", findSum(arr, length));
    return 0;
}