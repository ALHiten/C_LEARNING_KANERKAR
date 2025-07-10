// The policy followed by a company to process customer orders
// is given by the following rules:
// (a) If a customer order is less than or equal to that in stock
// and has credit is OK, supply has requirement.
// (b) If has credit is not OK do not supply. Send him
// intimation.
// (c) If has credit is Ok but the item in stock is less than has
// order, supply what is in stock. Intimate to him data the
// balance will be shipped.
// Write a C program to implement the company policy. 



#include <stdio.h>
int main() {
    int a, b ,c, d;

    printf(" Enter required information \n");
    printf(" Order: ");
    scanf("%d", &a);
    printf(" Stock: ");
    scanf("%d", &b);
    printf(" Credit(Ok=1/not Ok=0): ");
    scanf("%d", &c);

    d = a - b;
    
    if (c == 0) {
        printf(" Credit not approved. Order cannot be processed.");
    } else if (a <= b && c == 1) {
        printf(" Supplied %d units", a);
    } else if (a >= b && c == 1) {
        printf(" Supplied %d units", b);
        printf("\n Balance %d will be shipped lated.", d);
    }

    return 0;

}