#include<stdio.h>

int main(){
    int count = 0;
    char arr[] = "Cat";
    char *ptr = arr;


    while(*ptr != '\0'){
        count++;
        ptr++;
    }

    printf("%d", count);
    return 0;
}