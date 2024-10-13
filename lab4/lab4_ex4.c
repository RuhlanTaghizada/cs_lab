#include<stdio.h>

int main() {
    int n;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];
    puts("Insert the values of the array");
    for (int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);
    }
    int idx, el;
    puts("Enter the idx and el");
    scanf("%d%d", &idx, &el);
    for (int i = 0; i<n; i++){
        if (idx == i){
            int trm;
            trm = arr[i];
            arr[i] = el;
        } 
    }
    if (idx>n) {
        printf("Invalid input! ");
    }
    for (int i = 0; i<n; i++){
        printf("The array is %lu\n", arr[i]);
    }
    return 0;
}