// A cashier has currency notes of denominations 10, 50 and
// 100. If the amount to be withdrawn is input through the
// keyboard in hundreds, find the total number of currency notes
// of each denomination the cashier will have to give to the
// withdrawer. 


#include <stdio.h>
int main () {

    int money, remain, hundreds, tens, fifties;

    printf(" Enter the amount to be withdrawn: ");
    scanf("%d", &money);

    hundreds = money / 100;
    remain = money % 100;

    fifties = remain / 50;
    remain = remain % 50;

    tens = remain / 10;

    printf("Number of 100 Rs notes = %d\n", hundreds);
    printf("Number of 50 Rs notes  = %d\n", fifties);
    printf("Number of 10 Rs notes  = %d\n", tens);

    return 0;

}