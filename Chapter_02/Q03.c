// Any year is input through the keyboard. Write a program to
// determine whether the year is a leap year or not. 



#include <stdio.h>
int main(){
    int num;

    printf(" Enter any year: ");
    scanf("%d", &num);

    if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0 )) {
        printf("Fcking leap year man!!!");
    } else {
        printf(" Normal year, Average just like you, LMAO");
    }
    
    return 0;

}
