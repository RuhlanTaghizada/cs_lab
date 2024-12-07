#include<stdio.h>

int main(){  
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i =0; i<size; i++){
        scanf("%d", arr[i]);
    }
    scanf("%d", arr);
    int tmp = *arr;
    for (int i =0; i<5; i++){
        if (tmp<*(arr+i)){
            tmp = *arr+i;
        }
    }
    printf("%d", tmp);
    return 0;
}