// If a five-digit number is input through the keyboard, write a
// program to reverse the number.  



#include <stdio.h>
int main() {
    int num, rev = 0;

    printf("Enter 5 digit number: ");
    scanf("%d", &num);

    rev = rev * 10 + num % 10;
    num = num / 10;

    rev = rev * 10 + num % 10;
    num = num / 10;

    rev = rev * 10 + num % 10;
    num = num / 10;

    rev = rev * 10 + num % 10;
    num = num / 10;

    rev = rev * 10 + num % 10;
    num = num / 10;

    printf("Reversed number= %d\n", rev);

    return 0;

}