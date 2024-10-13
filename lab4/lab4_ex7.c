#include<stdio.h>

int main() {
    int n;
    puts("Insert the number of values in the array");
    scanf("%d", &n);
    long arr[n];
    puts("Insert the valuesof the array");

    for (int i = 0; i<n; i++)
    {
        scanf("%lu", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    int maxPos = 0;
    int minPos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < min){
                min = arr[j];
                minPos = j;
            }
    }
    for (int i = 0; i<n; i++)
    { 
        if (i == 0){
            int temp;
            temp = arr[0];
            arr[0] = min;
            arr[minPos] = temp; 
        } else if (i == 1){
            int tmp;
            tmp = arr[1];
            arr[1] = max;
            arr[maxPos] = tmp;
        }
    }
    for (int i = 0; i<n; i++)
    {
        printf("%lu", arr[i]);
    }
    return 0;
}