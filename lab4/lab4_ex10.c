#include<stdio.h>

int main(){
    int n, z = 0;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];
    int target;
    puts("Insert the target value: ");
    scanf("%d", &target);
    puts("Insert the values of the array: ");
    for ( int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);
    }
    for (int i = 0; i<n; i++){
        if (arr[i] + arr[i+z] == target) {
            z++;
            printf("The indexes to reach the target sum are %d and %d", i, i+z);

        }
    }


    return 0;
}