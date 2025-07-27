// Write a program to produce the following output:
//    1
//   2 3
//  4 5 6
// 7 8 9 10 


#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        
        if (i == 1) printf("     ");
        if (i == 2) printf("   ");
        if (i == 4) printf(" ");

        
        printf("%2d ", i);

        
        if (i == 1 || i == 3 || i == 6 || i == 10) {
            printf("\n");
        }
    }

    return 0;
}
