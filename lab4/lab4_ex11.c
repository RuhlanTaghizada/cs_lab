#include<stdio.h>

int main() {
    int n, z=1;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];  
    int j;  
    puts("Insert the valuesof the array");
    for (int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);  
           
    }
    for (int i = 0, count = 0; i<n; i++){
        z =1;
        for(int j = 0; j<n; j++){ 
            if (arr[i] == arr[j] && (i!=j)) {
                z =0;
                break; 
            }
        }
        if (z == 1) {
            printf("The value is not repeated %lu\n", arr[i]);
            break;
        }
    }
    return 0;
}