// Write a program to print all prime numbers from 1 to 300.
// (Hint: Use nested loops, break and continue) 



#include <stdio.h>
int main() {
    int i, h;

    printf(" Well Prime Numbers from 1 to 300 \n");

    for (i = 2; i <= 300; i++) {

        for (h = 2; h < i; h++) {
            if (i % h == 0) {
            break;
            }
        }

        if (h < i) {
            continue;
        }



        printf(" %d \n", i);
    }

    return 0;
} 