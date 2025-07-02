// If cost price and selling price of an item is input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit
// he made or loss he incurred. 



#include <stdio.h>
int main(){
    int CP, SP, profit, loss;

    printf(" Enter the cost price of the item: ");
    scanf("%d", &CP);
     
    printf(" Enter the selling price of the item: ");
    scanf("%d", &SP);

    if (CP < SP) {
        profit = SP - CP;
        printf("\n Profit made = %d\n", profit);

    } else {
        loss = CP - SP;
        printf("\n Loss incurred = %d\n", loss);
    }

    return 0;


}