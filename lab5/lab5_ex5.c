#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 1000

int main() {
    puts("Enter the text: ");
    int count = 0, n;
    char text[SIZE]; 
    fgets(text, SIZE, stdin);
    int length = strlen(text); 
    char rev_text[SIZE];
    n = strlen(text);
    for (int i = 0; text[i] != '\0'; i++){
        rev_text[i] = text[length- 1 - i];
    }
    printf("%s\n", text);
    printf("%s\n", rev_text);

    for(int i = 0; rev_text[i] != '\0'; i++){
        printf("%c", rev_text[i]);
        }
    
    for(int i = 0, j =1; text[i] != '\0'; i++, j++) {
        if (text[i] == rev_text[j]){
            count++;
        }
    }
    if (count == n){
        printf("poledrome");
    } else {
        printf("Not Polindrome");
    }
    // if (strcmp(text, rev_text) == 0){
    //     printf("yes");
    // } else{
    //     printf("no");
    // }


    return 0;
}