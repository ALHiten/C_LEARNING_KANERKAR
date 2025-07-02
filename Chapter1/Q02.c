// The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters. 


#include <stdio.h>

int main() { 
    float kilometer, meters, feet, inches, centimeters;

    printf("Enter the distance between two cities in kilometer: ");
    scanf("%f", &kilometer);

    meters = 1000 * kilometer;
    feet = 3.28 * 1000 * kilometer;
    inches = 39.37 * 1000 * kilometer;
    centimeters = 100 * 1000 * kilometer;

    printf("\nDistance in different units; \n");
    printf("Meters      = %.2f m\n", meters);
    printf("Feet        = %.2f ft\n", feet);
    printf("Inches      = %.2f in\n", inches);
    printf("Centimeters = %.2f cm\n", centimeters);
  
    return 0;

}