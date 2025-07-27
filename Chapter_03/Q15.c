// Write a program to produce the following output:
// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A





#include <stdio.h>
int main(){
    int i, j;
    char c;

    for (i = 0; i < 8; i++) {
        for (c = 'A'; c <= 'G' - i; c++){
            printf(" %c", c);
    }
        for (j = 1; j < (2 * i); j++) {
            printf("  ");
        }

        for (c = 'G' - i ; c >= 'A' ; c--) {
            if (i == 0 && c == 'G') {
                continue;
            }
            printf(" %c", c);
    }

        printf("\n");
    }
    return 0;

}