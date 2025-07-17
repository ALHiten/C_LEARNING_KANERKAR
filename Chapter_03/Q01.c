// Write a program to calculate overtime pay of 10 employees.
// Overtime is paid at the rate of Rs. 12.00 per hour for every
// hour worked above 40 hours. Assume that employees do not
// work for fractional part of an hour. 



#include <stdio.h>

int main() {
    int i = 1, hours, overtime_pay;

    printf("Calculating overtime pay for 10 employees...\n\n");

    while (i <= 10) {  
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d", &hours);

        if (hours > 40) {
            overtime_pay = (hours - 40) * 12;
            printf("Overtime pay for employee %d is Rs. %d\n", i, overtime_pay);
        } else {
            printf("Employee %d is not eligible for overtime pay.\n", i);
            
        }

        i++; 
    }

    return 0;
}
