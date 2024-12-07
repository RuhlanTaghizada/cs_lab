#include<stdio.h>

int main(){
    char big[20];
    char arr[10];
    scanf("%c", arr);
    char arr2[10];
    scanf("%c", arr2);
    char *tmp = big;

    int *ptr = arr;
    int *ptr2 = arr2;


    while(*ptr != '\0'){
        big = *ptr;
        ptr++;
    }

    while(*ptr2 != '\0'){
        big = *ptr2;
        ptr2++;
    }
    return 0;
}