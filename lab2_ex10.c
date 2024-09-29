#include <stdio.h>

int main()
{
    int x1, y1;
    int x, y, r;
    printf("give the coordinates of the point\n");
    scanf("%d%d", &x1, &y1);
    printf("Give the origin of the circle and its radius\n");
    scanf("%d%d%d", &x, &y, &r);
    int value =( (x - x1)*(x - x1) - ((y - y1)*(y - y1)));
    while (scanf("%d%d", &x1, &y1) != EOF) {
        if (value < r * r)
        {
        printf("The point is inside the circle ");
        }
        else if (value == r * r)
        {
        printf("the point is on the circle");
        }
        else
        {
        printf("the point is not inside of the circle");
        }
    }
    return 0;
}