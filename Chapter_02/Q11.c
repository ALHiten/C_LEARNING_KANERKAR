// Given the coordinates (x, y) of a center of a circle and it’s radius,
// write a program which will determine whether a point lies inside
// the circle, on the circle or outside the circle.
// (Hint: Use sqrt( ) and pow( ) functions) 



#include <stdio.h>
#include <math.h>
int main() {

    float x, y, r, x1, y2, dist;

    printf(" Enter the coordinates of the centre of circle: ");
    scanf("%f %f", &x, &y);

    printf(" Enter the radius of circle: ");
    scanf("%f", &r);

    printf(" Enter the coords of a point: ");
    scanf("%f %f", &x1, &y2);

    dist = sqrt(pow(x - x1, 2) + pow(y - y2, 2));

    if (dist < r) {
        printf(" IN the freakin circle man! ");
    } else if (dist == r) {
        printf(" ON the circle ");
    } else {
        printf(" GET OUTTT!! ");
    }

    return 0;
    
}