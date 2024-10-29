#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
srand(time(NULL));
    int n, chances, count = 0;
    puts("Enter the dimensions of the table");
    scanf("%d", &n);
    chances = 2*n;
    char c='s';
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
    for(int j = 0; j<n/2; j++){
            arr[rand()%n][rand()%n] = 's';
    }
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%c ",arr[i][j]);
        }
        puts("");
    }
    puts("------------------------");
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j]== 's'){
                if((arr[i][j+1] != 's') && (arr[i][j+2] !='s') && (arr[i-1][j+1] !='s') && (arr[i+1][j+1] !='s')){
                    arr[i][j+1] = 's';
                    break;
                } else if((arr[i+1][j] != 's') && (arr[i+2][j] !='s') && (arr[i+1][j+1] !='s') && (arr[i+1][j-1] !='s')){
                    arr[i+1][j] = 's';
                    break;
                } else if((arr[i-1][j-1] != 's') && (arr[i][j-2] !='s') && (arr[i+1][j-1] !='s')&& (arr[i][j-1] !='s')){
                    arr[i][j-1] = 's';
                    break;
                } else if((arr[i-1][j] != 's') && (arr[i-2][j] !='s') && (arr[i-1][j-1] !='s')&& (arr[i-1][j+1] !='s')){
                    arr[i-1][j] = 's';
                    break;
                }
                }
            }   
        }
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%c ",arr[i][j]);
        }
        puts("");
    }
    label:
        for(int i = 1; i<=chances; i++){
            int row, col;
            puts("Enter the row");
            scanf("%d", &row);
            if (row == -1){
                printf("Let's restart your attempts\n");
                goto label;
            } else if(row == -2){
                printf("The game is terminated\n");
                return -2;
            }else{
                puts("Enter the column\n");
                scanf("%d", &col);
                if((arr[row][col]) =='s'){
                    count++;
                    printf("Yes\n");
                    if (count < (n/2)){
                        printf("You hit the battleship\n");
                    } else{
                        printf("You win in %d attempts\n", i);
                        break;
                    }
                } else{
                    printf("No\n");
                    printf("You have %d attempts left\n", chances-i);
                }
            }
        }   
    return 0;
}