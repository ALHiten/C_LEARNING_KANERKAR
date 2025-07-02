// Given three points (x1, y1), (x2, y2) and (x3, y3), write a
// program to check if all the three points fall on one straight line.



#include <stdio.h>
int main(){
    int x1, x2, x3, y1, y2, y3, area;

    printf(" Enter three points (x,y): \n");
    printf(" Point 1: ");
    scanf("%d %d", &x1, &y1);
    printf(" Point 2: ");
    scanf("%d %d", &x2, &y2);
    printf(" Point 3: ");
    scanf("%d %d", &x3, &y3);

    area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    
    if (area == 0) {
        printf("I guess the line is  straighter than you");
    } else {
        printf(" Nah, it isn't straight at all...");
    }

    return 0;

}