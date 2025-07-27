//  Write a program to add first seven terms of the following
// series using a for loop:
// 1
// 1!
// 2
// 2!
// 3
// 3! ……



#include <stdio.h>
int main () {
    int f, h;
    float sum = 0.00, x = 0.00, i;

    for (i = 1; i <= 7; i++) {
        f = 1;
        for (h = 1; h <= i; h++) {
            f = f * h;
        }

        x = i / f;
        sum = sum + x;

    }

    printf(" Sum of first seven terms of this hellish loop is %0.2f", sum);

    return 0; 
}