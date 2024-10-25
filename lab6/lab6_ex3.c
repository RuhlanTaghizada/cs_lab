#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int sum_total=0;
    srand(time(NULL));

    puts("Enter number of rows");
    int n;
    scanf("%d", &n);

    if (n< 1) {
        puts("Invalid input");
        return -1;
    }
    
    int arr1[n][n];

    //initialization arr1
    for(int i=0; i<n; i++){
        for(int j= 0; j<n; j++){
            arr1[i][j] = rand()%6+1;
            
        }
    }

    //display arr1 
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%5d", arr1[i][j]);
        }
        puts("");
    }
    puts("--------------------------------");
    int sum1 =0;
    int sum2 =0;
    int center = 0;
    for(int i=0; i<n; i++){
        sum1+= arr1[i][i];
        center = arr1[i/2][i/2];
    }
    for(int i=0; i<n; i++){
        sum2+= arr1[i][n-i-1];
    }
    if(n%2 !=0){
        sum1 = sum1-center;
    }
    sum_total = sum1+sum2;

    printf("Sum of both diagonals is %d\n", sum_total);
    return 0;
}
