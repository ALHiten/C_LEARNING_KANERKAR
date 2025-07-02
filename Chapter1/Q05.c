// The length & breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the
// area & perimeter of the rectangle, and the area &
// circumference of the circle. 

#include <stdio.h>
int main() {
    float L, B, R, P, Ac, Ar, C, Pi;
    Pi = 3.14;

    printf(" Enter the length and breadth of a rectangle\n");
    printf("\n Length: ");
    scanf("%f", &L);
    printf(" Breadth: ");
    scanf("%f", &B);

    Ar = L * B;
    P = 2 * (L + B);

    printf("\n Enter the radius of circle\n");
    printf("\n Radius: ");
    scanf("%f", &R);

    Ac = Pi * R * R;
    C = 2 * Pi * R;

    printf("\n Area of Rectangle= %.2f \n", Ar);
    printf(" Perimeter of Rectangle= %.2f \n", P);
    printf(" Area of Circle= %.2f \n", Ac);
    printf(" Circumference of Circle= %.2f \n", C);
    

    return 0;

      
}