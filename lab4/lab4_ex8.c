#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];
    int sum = 0;
    puts("Insert the valuesof the array");
    for (int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int max_counter = 0;
    int min_counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_counter++;
        }
    }
    for (int j = 0; j < n; j++){
        if (arr[j] < min){
                min = arr[j];
                min_counter = min_counter + 1;
            }
    }
    for (int i = 0; i<n; i++){
        sum += arr[i];

    }
    printf("%d and %d \n", min_counter, max_counter);
    printf("%d and %d\n", max, min);
    sum = sum - (max_counter * max) - (min_counter * min);

    printf("%d", sum);
    return 0;
}