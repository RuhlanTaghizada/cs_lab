#include <stdio.h>

int values(float x1, float y1, float x, float y, float r){
    int value =( (x - x1)*(x - x1) - ((y - y1)*(y - y1)));
    return value;
}
int check(int value, float r){
    int a;
    if (value<r*r){
        a = 1;
    }else if(value == r*r){
        a = 0;
    }else if(value> r*r){
        a = -1;
    }

    return a;
}

int main()
{
    float x1, y1;
    float x, y, r;
    int value;
    printf("give the coordinates of the point\n");
    scanf("%f%f", &x1, &y1);
    printf("Give the origin of the circle and its radius\n");
    scanf("%f%f%f", &x, &y, &r);
    printf("%d\n", values(x1, y1, x, y, r));
    printf("%d", check(value,r));
    return 0;
}