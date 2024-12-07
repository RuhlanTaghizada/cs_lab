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
        for(int j =0; j<length/2; j++){
                swap(&arr[j], &arr[length-1-j]);
            }
        }
void print(int arr[], int length){
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);

    }
}


int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i =0; i<size; i++){
        scanf("%d", arr[i]);
    }
    bubble(arr, 5);
    print(arr, 5);
    return 0;
}