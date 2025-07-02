// If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits.



#include <stdio.h>

int main() {
    int num, digit, sum;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    digit = num % 10;
    sum += digit;
    num = num / 10;

    digit = num % 10;
    sum += digit;
    num = num / 10;

    digit = num % 10;
    sum += digit;
    num = num / 10;

    digit = num % 10;
    sum += digit;
    num = num / 10;

    digit = num % 10;
    sum += digit;

    printf("Sum of digits = %d\n", sum);

    return 0;
}
