#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
srand(time(NULL));
    int n, chances;
    int posit_1 = 0, posit_2 = 0;
    puts("Enter the dimensions of the table");
    scanf("%d", &n);
    chances = 2*n;
    char c[n/2];
    for (int i = 0; i<n/2; i++){
        c[i] = 's';
    }
    for (int i = 0; i<n/2; i++){
        printf("%c", c[i]);
    }
    puts("-----------------------");
    if(n<3){
        return -1;
    }
    char arr[n][n], check[n][n];
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            arr[i][j] = '_';
        }
    }
    for(int i=0; i<n/2; i++){
        for(int j = 0; j<n/2; j++){
            arr[(rand())%n][(rand())%n] = c[i];
        }
    }

    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%c ",arr[i][j]);
        }
        puts("");
    }
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j]== 's'){
                posit_1 = i;
                posit_2 = j;
            }   
        }
        puts("");
    }
    printf("%d %d\n", posit_1, posit_2);
    // label:
    //     for(int i = 1; i<=chances; i++){
    //         int row, col;
    //         puts("Enter the row");
    //         scanf("%d", &row);
    //         if (row == -1){
    //             printf("Let's restart your attempts");
    //             goto label;
    //         } else if(row == -2){
    //             printf("The game is terminated");
    //             return -2;
    //         }else{
    //             puts("Enter the column\n");
    //             scanf("%d", &col);
    //             if((arr[row][col]) == arr[posit_1][posit_2]){
    //                 printf("Yes\n");
    //                 printf("You win in %d attempts\n", i);
    //                 break;
    //             } else{
    //             }
    //         }
    //     }
    return 0;
}