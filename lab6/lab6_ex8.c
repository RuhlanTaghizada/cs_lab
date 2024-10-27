#include<stdio.h>

int main() {
    int n, count = 0;;
    puts("Enter the number of the words");
    scanf("%d", &n);
    char arr[n];
    puts("Enter the words");
    for(int i = 0; i<n; i++){
        scanf("%s", &arr[i]);
    }
    int n2;
    puts("Enter the number of target names");
    scanf("%d", &n2);
    char target[n2];
    puts("Enter the target names");
    for(int i = 0; target[i]<n2; i++){
        scanf("%s", &target[i]);
    }
    for(int i =0; arr[i]!='\0'; i++){
        if(arr[i] == target[i]){
            printf("%d", i);
            count++;
        }
    }

    return 0;

}