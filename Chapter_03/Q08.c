// Write a program to find the octal equivalent of the entered
// number. 



#include <stdio.h>
int main() {
    int num, x, y = 1, z, octal = 0;

    printf(" Enter a number: ");
    scanf("%d", &num);
    z = num;

    while (num != 0) {
        x = num % 8;
        octal = octal + (x * y);
        y = y * 10; 
        num = num / 8;
    }

    printf(" Octal equivalent of %d is %d", z, octal);
    
}