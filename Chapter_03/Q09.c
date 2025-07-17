// Write a program to find the range of a set of numbers. Range
// is the difference between the smallest and biggest number in
// the list.


#include <stdio.h>
int main() {
    int num, range, choice;
    int x = 0;
    int y = 0; 
    
    do {
        printf(" Enter a number of your desire: ");
        scanf("%d", &num);

        if (num > x) {
            x = num;
        }

        if (num < y) {
            y = num;
        }

        printf(" Are you done? (Yes = 1, No = 0): ");
        scanf("%d", &choice);

    } while (choice == 0);

    range = x - y;

    printf("\n Range of the number entered is %d", range);

}
