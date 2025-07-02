// Given a point (x, y), write a program to find out if it lies on the
// x-axis, y-axis or at the origin, viz. (0, 0). 



#include <stdio.h>

int main() {
    float x, y;

    printf(" Enter the coords of a point (x, y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf(" It's the origin");
    } else if (x == 0 && y != 0) {
        printf(" It's on Y Axis");
    } else if (x != 0 && y == 0) {
        printf(" It's on X Axis");
    } else {
        printf(" On the plane somewhere idk");
    }

    return 0;
}