// In a town, the percentage of men is 52. The percentage of
// total literacy is 48. If total percentage of literate men is 35 of
// the total population, write a program to find the total number
// of illiterate men and women if the population of the town is
// 80,000. 


#include <stdio.h>
int main (){
    int TI, IM, IW;

    printf("Total population of the town is 80000\n");

    // women = 800 * 48
    // men   = 800 * 52

    TI = 800 * 52;

    IM = 8 * 52 * 65;
    IW = TI - IM; 

    printf("Total number of illiterate men= %d\n", IM);
    printf("Total number of illiterate women= %d\n", IW);

    return 0;

   
}