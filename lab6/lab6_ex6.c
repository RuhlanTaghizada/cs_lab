#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int sum;
    int count1=0;
    int count2=0;

    puts("Enter number of rows");
    int rows;
    scanf("%d", &rows);

    if (rows< 1) {
        puts("Invalid input");
        return -1;
    }
    
    int arr[rows][rows];

    //initialization arr
    for(int i=0; i<rows; i++){
        for(int j= 0; j<rows; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    //display arr 
    for(int i =0; i<rows; i++){
        for(int j = 0; j<rows; j++){
            printf("%5d", arr[i][j]);
        }
        puts("");
    }

    for(int i =0; i<rows; i++){
        for(int j = 0; j<rows; j++){
            if((i==j) && (arr[i][j] == 1)){
                count1++;
            } else if ((i!=j)&&(arr[i][j] == 0)){
                count2++;
            }
        }
    }
    printf("%d %d \n", count1, count2);
    if( (count1+count2) == (rows*rows)){
        printf("Yes");
    } else{
        printf("No");
    }

    return 0;
}
