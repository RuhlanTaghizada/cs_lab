#include<stdio.h>



int findMax(int length, int arr[]){
    int max = arr[0];
    for(int i = 1; i<length-1;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int length;
    puts("enter the length: ");
    scanf("%d", &length);
    int arr[length];
    for (int i = 0; i<length; i++ ){
        scanf("%d", &arr[i]);
    }
    printf("%d", findMax(length, arr));
    return 0;
}