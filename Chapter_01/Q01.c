// Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate
// his gross salary.

#include <stdio.h>

int main() {
    float basic_salary, D, H, gross_salary;

    printf("Enter Ramesh's Basic Salary: ");
    scanf("%f", &basic_salary);

    D = 0.40 * basic_salary;
    H = 0.20 * basic_salary;


    gross_salary = basic_salary + D + H;

    printf("Ramesh's Gross Salary = %.2f\n", gross_salary);

    return 0;
}