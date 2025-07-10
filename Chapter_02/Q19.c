// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// isosceles, equilateral, scalene or right angled triangle. 


#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    
    printf(" Enter the sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        printf(" Enter Natural numbers. ");
    } else if ((c >= a + b) || (a >= b + c) || (b >= a + c)) {
        printf(" Enter correct lengths. ");
    } else if (a == b && a == c && b == c) {
        printf(" Equilateral Triangle ");
    }  else if ((a == b) || (a == c) || (b == c)) {
        printf(" Isoceles Triangle ");
    } else if ((a == sqrt(pow(b, 2) + pow(c, 2))) || (b == sqrt(pow(a, 2) + pow(c, 2))) || (c == sqrt(pow(b, 2) + pow(a, 2)))) {
        printf(" Right Angled Triangle ");
    }  else if (a != b && a != c && b != c) {
        printf(" Scalene Triangle ");
    }
       

    return 0;

}