#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 1000

int main(){
    int n;
    puts("Enter the size of the array");
    scanf("%d",&n);
    char text[n];
    fgets(text, n, stdin);
    return 0;
}