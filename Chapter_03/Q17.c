// Write a program to print the multiplication table of the
// number entered by the user. The table should get displayed in
// the following form.
//  29 * 1 = 29
//  29 * 2 = 58




#include <stdio.h>
int main() {
    int i, num, mul;

    printf(" Enter a number: ");
    scanf("%d", &num);
    

    for (i = 1; i <= 10; i++) {
        mul = num * i;
        printf(" %d * %d = %d \n", num, i, mul);
        
    }

    return 0;

}

