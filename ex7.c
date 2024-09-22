#include <stdio.h>

int main() {
    int length, width, height;
    printf("Enter the length, width, height of your box\n");
    scanf("%d%d%d", &length, &width, &height);

    int r;
    printf("Enter the radius of your basketball\n");
    scanf("%d",&r);

    if ( 2*r <= length && 2*r<= width && 2*r<=height) {
        printf("You can send the basketball\n");
    } else{ 
        printf("Sorry you can't send it\n");
    }
    return 0;
}