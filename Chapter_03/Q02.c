// Write a program to find the factorial value of any number
// entered through the keyboard. 



#include <stdio.h>
int main() {
    int n, i, f;
    f = 1;
    

    printf(" Enter a number: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Enter a Natural number ");
    } else {
        for (i = 1; i <= n; i++) {
            f = f * i;
        }

        printf(" Factorial of %d = %d", n, f);
    }

    return 0;

}
