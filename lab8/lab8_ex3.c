#include<stdio.h>


void bubble(int arr[], int length);
void print(int arr[], int length);
void swap(int*, int*);

void swap (int *pX, int *pY){
    int tmp = *pX;
    *pX =*pY;
    *pY =tmp;
    }

void bubble(int arr[], int length){
        for(int j =0; j<length-1; j++){
                swap(&arr[j], &arr[j+1]);
            }
        }
void print(int arr[], int length){
    for(int i=0; i<length; i++){
        printf("%d ,", arr[i]);

    }
}


int main(){
    int arr[5];
    for(int i =0; i<5; i++){
        scanf("%d", arr[i]);
    }
    bubble(arr, 5);
    print(arr, 5);
    return 0;
}