// Any character is entered through the keyboard, write a
// program to determine whether the character entered is a
// capital letter, a small case letter, a digit or a special symbol.
// The following table shows the range of ASCII values for
// various characters.
// Characters                ASCII Values
// A – Z                        65 - 90
// a – z                        97 - 122
// 0 – 9                        48 – 57
// special symbols            0 - 47, 58 - 64, 91 - 96, 123 - 127 




#include <stdio.h>
int main(){
    char c;

    printf(" Enter any capital letter, a small case letter, a digit or a special symbol: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf(" Capital Letter ");
    } else if (c >= 'a' && c <= 'z') {
        printf(" Small case letter ");
    } else if (c >= '0' && c <= '9' ) {
        printf(" Digit ");
    } else {
        printf(" Special symbols ");
    }

    return 0;

}


 