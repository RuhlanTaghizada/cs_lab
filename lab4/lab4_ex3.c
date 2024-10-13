#include<stdio.h>

int main() {
    int n;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];
    int k;
    scanf("%d", &k);
    puts("Insert the valuesof the array");
    for (int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);
    }
    for (int i = n -1; i>=0; i--){
        if (((n-1) % k) == 0){
            puts("");
        }
        printf("%lu", arr[i]);
    }
    return 0;
}