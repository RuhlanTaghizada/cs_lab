#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int sum =0;
    puts("Enter number of size of the table");
    int size;
    scanf("%d", &size);


    if (size< 1) {
        puts("Invalid input");
        return -1;
    }
    
    int arr[size][size];

    //initialize
    for(int i=0; i<size; i++){
        for(int j= 0; j<size; j++){
            arr[i][j] = rand()%6+1;
            
        }
    }

    //  display
    for(int i =0; i<size; i++){
        for(int j = 0; j<size; j++){
            printf("%5d", arr[i][j]);
        }
        puts("");
    }
    puts("--------------------------------");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i>j){
                sum += arr[i][j];
            }
        }
    }

    printf("Sum of the values under the diagonal is %d\n", sum);

    return 0;
}

