// Two numbers are entered through the keyboard. Write a
// program to find the value of one number raised to the power
// of another. 


#include <stdio.h>

int main() {
    int x, y, i;
    int result = 1;
    
    printf(" Enter Two numbers: ");
    scanf("%d %d", &x, &y);

    for (i = 1; i <= y; i++) {
        result = result * x;
    }

    printf(" %d to the power %d is %d", x, y, result);
    
    return 0;
}