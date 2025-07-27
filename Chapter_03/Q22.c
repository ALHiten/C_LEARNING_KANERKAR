// The natural logarithm can be approximated by the following
// series.
// (well check book  ch 3- E. (m) part for full ques)
// If x is input through the keyboard, write a program to
// calculate the sum of first seven terms of this series.




#include <stdio.h>
#include <math.h>

int main() {
    int x, i;
    float a, b, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    a = (float)(x - 1) / x;

    for (i = 1; i <= 7; i++) {
        if (i == 1)
            b = a;
        else
            b = (0.5 * pow(a, i));

        sum += b;
    }

    printf("ln(%d) = %.5f\n", x, sum);
    return 0;
}

