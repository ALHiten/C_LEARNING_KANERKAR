// Any year is entered through the keyboard, write a program to
// determine whether the year is leap or not. Use the logical
// operators && and ||. 


#include <stdio.h>
int main(){
    int year;

    printf(" Enter any year in yo mind: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf(" LEAP Year ");
    } else {
        printf(" Another year but not a leap ");
    }
}