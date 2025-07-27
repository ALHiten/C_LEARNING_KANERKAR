// Write a program to fill the entire screen with diamond and
// heart alternatively. The ASCII value for heart is 3 and that of
// diamond is 4. 


#include <stdio.h>
int main(){
    char a = 3, b = 4;
    int i;


    for (i = 1; i <=2000; i++) {
        printf(" %c %c", a, b);
        continue;
    }

    return 0;



}