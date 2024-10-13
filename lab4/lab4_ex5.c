#include<stdio.h>
int main() {
    int n;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n+1];
    puts("Insert the values of the array");
    for (int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);
    }
    int el;   
    puts("Enter the element you want to add");
    scanf("%d", &el);
    for (int i = 0; i<n; i++){
        if ((arr[i]<el)&&(arr[i+1]>el)){
            int trm;
            trm = arr[i+1];
            arr[i+1] = el;
            arr[i+2] = trm;

        } 
    }
    for (int i = 0; i<n+1; i++){
        printf("The array is %lu\n", arr[i]);
    }
    return 0;
}