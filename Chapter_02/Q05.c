// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine
// whether the original and reversed numbers are equal or not. 


#include <stdio.h>
int main(){
    int num, rev, d1, d2, d3, d4, d5, original;

    printf(" Enter a five digit number: ");
    scanf("%d", &num);

    original = num;

    d1 = num % 10;
    num = num / 10; 
    d2 = num % 10;
    num = num / 10; 
    d3 = num % 10;
    num = num / 10;
    d4 = num % 10;
    num = num / 10;
    d5 = num % 10;

    rev = (10000 * d1) + (1000 * d2) + (100 * d3) + (10 * d4) + d5;

    printf("\n Reversed number is %d \n", rev);

    if (original == rev) {
        printf("They are equal.... palendrome ig");
    } else {
        printf("NAH-AH, not equal at all");
    }

    return 0;


}