// Temperature of a city in Fahrenheit degrees is input through
// the keyboard. Write a program to convert this temperature
// into Centigrade degrees.  


#include <stdio.h>
int main() { 

    float F, C;
     
    printf("Enter temperature of city in fahrenheit degrees:  ");
    scanf("%f", &F);

    C = ((F - 32) * 5) / 9; 

    printf("Temperature in Centigrade degrees = %.2f C", C);

    return 0;

}