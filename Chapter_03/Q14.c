// According to a study, the approximate level of intelligence of
// a person can be calculated using the following formula:
// i = 2 + ( y + 0.5 x )
// Write a program, which will produce a table of values of i, y
// and x, where y varies from 1 to 6, and, for each value of y, x
// varies from 5.5 to 12.5 in steps of 0.5. 





#include <stdio.h>
int main (){
    int y;
    float x, i;


    for (y = 1; y <= 6; y++) {
        for (x = 5.5; x <= 12.5; x+= 0.5 ) {
            i = 2 + ( y + ( 0.5 * x ) );

            printf(" y = %d\n", y);
            printf(" x = %0.1f\n", x);
            printf(" i = %0.1f\n\n", i);
        }
    }

    return 0;




}