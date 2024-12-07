#include<stdio.h>

typedef struct books {
    char author[50];
    float price;
    char title[50];
} book;
void B_print(book b)
{
    printf("(Author: %s, Price: %.2f manat, Title: %s)\n", b.author, b.price, b.title);
}

int main(){
    book n1 ={"Orwell", 4, "Animal Farm"};
    B_print(n1);
    book n2 = {"Author 2", 5, "Book2"};
    B_print(n2);
    printf("%d - because the size of 2 char arrys is 100, and size of float is 8", sizeof(struct books));



    return 0;
}