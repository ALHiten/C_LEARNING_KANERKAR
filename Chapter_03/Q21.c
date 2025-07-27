// When interest compounds q times per year at an annual rate of
// r % for n years, the principle p compounds to an amount a as per
// the following formula
// a = p ( 1 + r / q ) nq
// Write a program to read 10 sets of p, r, n & q and calculate
// the corresponding as. 



#include <stdio.h>
#include <math.h>
int main () {
    int i, p, q, r, n;
    float a;

    printf(" p: Principal \n");
    printf(" r: Annual interest rate. \n");
    printf(" q: Number of times interest is compounded per year. \n");
    printf(" n: Number of years. \n");
    printf(" a: Final amount after compounding interest. \n\n");

    for (i = 1; i <= 10; i++) {

        printf("\n    Set %d    \n", i);

        a = 0;
        printf("\n p: ");
        scanf("%d", &p);

        printf(" r: ");
        scanf("%d", &r);

        printf(" q: ");
        scanf("%d", &q);

        printf(" n: ");
        scanf("%d", &n);

        a = p * (pow(1 + (r / (100.0 * q)), n * q));

        printf(" a = %0.2f\n", a);
       
    }

    return 0;


}