#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 1000
int main() {
    puts("Enter the text: ");
    int count = 0;
    char text[SIZE];  
    fgets(text, SIZE, stdin);
    char el;
    puts("Enter the target element");
    scanf("%c", &el);
    for (int i = 0; text[i] != '\0'; i++){
        if (text[i] == el){
            printf("%d", i);
            count++; 
            break;
        }
    } 
    if(count == 0){
        printf("The element is not in the string");
    }
    return 0;
}