#include<stdio.h>

int main() {
    int n, count = 0;;
    puts("Enter the number of the words");
    scanf("%d", &n);
    char arr[n];
    puts("Enter the words");
    for(int i =0; i<n; i++){
        scanf("%s", &arr[i]);
    }
    puts("Enter your target word");
    char target;
    scanf("%s", &target);
    for(int i =0; arr[i]!='\0'; i++){
        if(arr[i] == target){
            printf("%d", i);
            count++;
        }
    }
    if (count ==0){
        puts("-1");
    }

    return 0;

}