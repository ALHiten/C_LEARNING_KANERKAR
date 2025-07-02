// If the total selling price of 15 items and the total profit earned
// on them is input through the keyboard, write a program to
// find the cost price of one item. 


#include <stdio.h>
int main () {
    float total_price, profit, price;

    printf(" Enter the total selling price of 15 item: ");
    scanf("%f", &total_price);
    printf(" Enter the total profit earned: ");
    scanf("%f", &profit);

    price = (total_price - profit) / 15;

    printf("\n The cost price of one item =  %0.2f", price);

    return 0;

}