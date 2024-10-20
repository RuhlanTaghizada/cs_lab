#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 1000
int main() {
    puts("Enter the text: ");
    int count = -1;
    char text[SIZE];  
    fgets(text, SIZE, stdin);
    for (int i = 0; text[i] != '\0'; i++){
            count++;
    } 
    printf("The number of characters is %d", count);
    return 0;
}