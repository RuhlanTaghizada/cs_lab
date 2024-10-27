#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main () {
    srand(time(NULL));
    int n, chances;
    int posit_1 = 0, posit_2 = 0;
    char c ={'t'};
    puts("Enter the dimensions of the table");
    scanf("%d", &n);
    chances = 2*n;
    if(n<3){
        return -1;
    }
    char arr[n][n], check[n][n];
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            arr[i][j] = '_';
        }
    }
    arr[rand()%n][rand()%n] = c;

    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%c ",arr[i][j]);
        }
        puts("");
    }
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j]== 't'){
                posit_1 = i;
                posit_2 = j;
            }   
        }
        puts("");
    }
    printf("%d %d\n", posit_1, posit_2);
    label:
        for(int i = 1; i<=chances; i++){
            int row, col;
            puts("Enter the row");
            scanf("%d", &row);
            if (row == -1){
                printf("Let's restart your attempts");
                goto label;
            } else if(row == -2){
                printf("The game is terminated");
                return -2;
            }else{
                puts("Enter the column\n");
                scanf("%d", &col);
                if((arr[row][col]) == arr[posit_1][posit_2]){
                    printf("Yes\n");
                    printf("You win in %d attempts\n", i);
                    break;
                } else{
                    printf("No\n");
                    if(row<posit_1 && col<posit_2){
                        printf("Go to the NorthEast\n");
                    } 
                    else if(row<posit_1 && col == posit_2 ){
                        printf("Go to the South\n");
                    }
                    else if(row==posit_1 && col<posit_2){
                        printf("Go to the East\n");
                    }
                    else if(row==posit_1 && col>posit_2){
                        printf("Go the the West\n");
                    }
                    else if(row>posit_1 && col >posit_2){
                        printf("Go to the SouthEast\n");

                    } else if(row>posit_1 && col == posit_2){
                        printf("Go to the North\n");
                    } else if(row > posit_1 && col > posit_2){
                        printf("Go to the NorthWest\n");
                    } else if( row<posit_1 && col<posit_2){
                        printf("Go to the SouthWest\n");
                    }
                    printf("You have %d attempts left\n", chances-i);
                }
            }
        }   
    return 0;
}