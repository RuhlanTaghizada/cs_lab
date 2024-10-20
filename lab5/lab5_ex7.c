#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 1000

int main() {
    puts("Enter the text: ");
    int count = 0;
    char text[SIZE]; 
    fgets(text, SIZE, stdin);
    int length = strlen(text); 
    char rev_text[SIZE];
    for (int i = 0; text[i] != '\0'; i++){
        rev_text[i] = text[length- 1 - i];
    }
    for(int i = 0; rev_text[i] != '\0'; i++){
        printf("%c", rev_text[i]);
        }

    return 0;
}