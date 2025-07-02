// If the ages of Ram, Shyam and Ajay are input through the
// keyboard, write a program to determine the youngest of the
// three. 


#include <stdio.h>
int main() {
    int age1, age2, age3;

    printf(" Enter the ages of\n");
    printf("\n Ram: ");
    scanf("%d", &age1);

    printf(" Shyam: ");
    scanf("%d", &age2);

    printf(" Ajay: ");
    scanf("%d", &age3);

    if (age1 <= age2 && age1 <=age3) {
        printf("\nRam is youngest among three");
    } else if (age2 <= age1 && age2 <= age3){
        printf("\nShyam is youngest among three");
    } else {
        printf("\nAjay is youngest among three");
    }

    return 0;

}