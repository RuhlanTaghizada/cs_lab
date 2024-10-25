#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));

    puts("Enter the dimensions");
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    int n;
    puts("Enter the scalar value");
    scanf("%d", &n);


    if (rows< 1 || cols<1) {
        puts("Invalid input");
        return -1;
    }
    
    int arr[rows][cols], res[rows][cols];

    //initialization arr1
    for(int i=0; i<rows; i++){
        for(int j= 0; j<cols; j++){
            arr[i][j] = rand()%6+1;
            
        }
    }

    //display arr1 
    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%5d", arr[i][j]);
        }
        puts("");
    }
    puts("--------------------------------");
    //multiply the matrixes
    for (int i =0; i<rows;i++){
        for(int j =0; j<cols; j++ ){
            int sum = 0;
            for(int k = 0; k<cols; k++){
                sum = arr[i][j] * n;
            }
            res [i][j] = sum;
        }
    }
    //display the result
    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%4d", res[i][j]);
        }
        puts("");
    }

    return 0;
}

