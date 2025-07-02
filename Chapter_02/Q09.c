// Given the length and breadth of a rectangle, write a program to
// find whether the area of the rectangle is greater than its
// perimeter. For example, the area of the rectangle with length = 5
// and breadth = 4 is greater than its perimeter. 



#include <stdio.h>
int main(){
    int L, B, peri, area;
    
    printf(" Enter length and breadth of the rectangle: ");
    scanf("%d %d", &L, &B);

    area = L * B;
    peri = 2 * (L + B);

    if (area > peri) {
        printf(" AREA! AREA! AREA! wins");
    } else if (area < peri) {
        printf(" Perimeter is the biggger wooohooo");
    } else {
        printf(" Nah! they equal");
    }
    return 0;
}