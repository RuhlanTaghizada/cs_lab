#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 1000
int main() {
    puts("Enter the text: ");
    int count = 0;
    char text[SIZE];  
    fgets(text, SIZE, stdin);
    for (int i = 0; text[i] != '\0'; i++){
        if ((text[i] == '#') && (isalpha(text[i+1]))){
            count++;
        }
    }
    if (count != 0) {
        printf("The number of words in the text is %d", count+1);        
    } else{ 
        printf("No words entered %d", count);
    }
    return 0;
}