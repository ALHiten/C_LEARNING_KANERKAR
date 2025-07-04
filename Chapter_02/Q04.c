// According to the Gregorian calendar, it was Monday on the
// date 01/01/1900. If any year is input through the keyboard
// write a program to find out what is the day on 1st January of
// this year. 



#include <stdio.h>

int main() {
    int y, year, leap, norm, days, week;

    
    printf("Enter the year : ");
    scanf("%d", &y); 

    year = y - 1;
    leap  = (year / 4) - (year / 100) + (year / 400);
    norm = year - leap; 
    days = (norm * 365) + (leap * 366);
    week =  (1 + days) % 7;

    if (year == 1900){
        printf(" It's monday! tf it's on the question already");
    } else if (week == 1){
        printf(" Monday! ");
    } else if (week == 2){
        printf(" Tuesday! ");
    } else if (week == 3){
        printf(" Wednesday! ");
    } else if (week == 4){
        printf(" Thursday! ");
    } else if (week == 5){
        printf(" Friday! ");
    } else if (week == 6){
        printf(" Saturday! ");
    } else if (week == 0){
        printf(" Sunday! ");
    } else {
        printf(" Wrong program ");
    }

    return 0;



    
}
