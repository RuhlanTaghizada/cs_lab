#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x%6 == 0) {
        printf("Excellent");
    } else if (x%3 == 0 || x%2 == 0) {
        printf("OK");
    } else {
        printf("Noo");
    }
    return 0;
}