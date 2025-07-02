// Find the absolute value of a number entered through the
// keyboard. 



#include <stdio.h>
int main(){
    float num, abs;

    printf(" Enter a Number: ");
    scanf("%f", &num);

    if (num < 0) {
        abs = -num;
    } else {
        abs = num;
    }

    printf(" \nAbsolute value is %0.2f", abs);
    
    return 0;


}