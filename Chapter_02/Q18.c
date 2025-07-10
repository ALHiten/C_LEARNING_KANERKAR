// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// valid or not. The triangle is valid if the sum of two sides is
// greater than the largest of the three sides. 



#include <stdio.h>
int main() {
    int a, b, c;
    
    printf(" Enter the sides of triangle:  ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        printf(" Enter Natural numbers. ");
    } else if ((c < a + b) && (a < b + c) && (b < a + c)) {
        printf(" It is infact a triangle. ");
    } else {
        printf(" Not a triangle for sure. ");
    }
    
    return 0;
}