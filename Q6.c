// Two numbers are input through the keyboard into two
// locations C and D. Write a program to interchange the
// contents of C and D. 


#include <stdio.h>
int main() {
    int C, D;

    printf(" Enter the numbers \n");
    printf(" C:");
    scanf("%d", &C);
    printf(" D:");
    scanf("%d", &D);

    printf("\n After Interchanging\n");
    printf(" C= %d\n",D);
    printf(" D= %d",C);

    return 0;
}