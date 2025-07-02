// If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this
// number. 


#include <stdio.h>
int main (){
     int num, sum = 0, digit;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    digit = num % 10;
    sum += digit;
    num = num / 1000;
    
    digit = num % 1000;
    sum += digit;

    printf("Sum of the first and last digit of the given number= %d\n", sum);

    return 0;

}