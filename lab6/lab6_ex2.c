#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));

    puts("Enter the dimensions");
    int rows, cols;
    scanf("%d%d", &rows, &cols);


    if (rows< 1 || cols<1) {
        puts("Invalid input");
        return -1;
    }
    
    int arr1[rows][cols], res[rows][cols];


    for(int i=0; i<rows; i++){
        for(int j= 0; j<cols; j++){
            arr1[i][j] = rand()%6+1;
            
        }
    }

    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%5d", arr1[i][j]);
        }
        puts("");
    }
    puts("--------------------------------");

    for (int i =0; i<rows;i++){
        for(int j =0; j<cols; j++ ){
            res[i][j] = arr1[j][i];
        }
    }

    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%4d", res[i][j]);
        }
        puts("");
    }

    return 0;
}
