// Write a program to check whether a triangle is valid or not,
// when the three angles of the triangle are entered through the
// keyboard. A triangle is valid if the sum of all the three angles
// is equal to 180 degrees. 



#include <stdio.h>
int main(){
    int ang1, ang2, ang3, TA;

    printf("Enter the angles of triangle: ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);

    TA = ang1 + ang2 + ang3;

    if (TA == 180) {
        printf(" Noice triangle bissh ");
    } else {
        printf(" Wrong X! that ain't a triangle ");
    }

    return 0;

}
