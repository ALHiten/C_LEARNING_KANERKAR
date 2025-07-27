// A machine is purchased which will produce earning of Rs.
// 1000 per year while it lasts. The machine costs Rs. 6000 and
// will have a salvage of Rs. 2000 when it is condemned. If 12
// percent per annum can be earned on alternate investments
// what would be the minimum life of the machine to make it a
// more attractive investment compared to alternative
// investment?




#include <stdio.h>
int main () {
    int ma , al, i;

    for (i = 1; i <= 100; i++) {
        ma = ((1000 * i) + 2000);
        al = (720 * i) + 6000;

        if (ma > al) {
            printf(" Mininum life to prefer machine: %d years\n", i);
            printf(" Machine earning = %d\n", ma);
            printf(" Alternative earning = %d\n", al);
            break;
        }
    }

    return 0;

     
}