#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 1000
int main() {
    puts("Enter the text");
    char text[SIZE];
    fgets(text, SIZE, stdin);
    char n, z;
    puts("Enter target");
    scanf("%c", &n);
    puts("Enter the replacing element");
    scanf("%c", &z);

    for( int i = 0; text[i] != '\0'; i++){
        if(text[i] == n)
        {
            text[i] = z;
            printf("%d", i);
            break;
        }
    }
    for( int i = 0; text[i] != '\0'; i++){
        printf("%c", text[i]);
    }

    return 0;
}