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
    
    int arr1[rows][cols], sum_row[rows], sum_col[cols];

    for(int i = 0; i<rows;i++){
        sum_row[i] =0;
    }
    for(int i = 0; i<cols;i++){
        sum_col[i] =0;
    }
    for(int i=0; i<rows; i++){
        for(int j= 0; j<cols; j++){
            arr1[i][j] = rand()%6+1;
            
        }
    }


    puts("--------------------------------");
    for(int i=0; i<rows;i++){
        for(int j = 0; j<cols; j++){
            sum_row[i] += arr1[i][j];
            sum_col[j] += arr1[i][j];
        }
    }
    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%5d", arr1[i][j]);
        }
        printf("| %d\n", sum_row[i]);
        }

    for(int i = 0; i<cols;i++){
            
            printf("%5c", '_');
    }
    puts("");
        for(int i = 0; i<cols;i++){
            
            printf("%5d", sum_col[i]);
    }


    return 0;
}
