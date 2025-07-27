// Write a program to fill the entire screen with a smiling face.
// The smiling face has an ASCII value 1. 



#include <stdio.h>
int main (){
    char f = 1;
    int i;  

    for (i = 0; i < 10000; i++) {
        printf("%c", f);
        continue;
    }

    

    return 0;
}