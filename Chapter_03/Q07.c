// Write a program to enter the numbers till the user wants and
// at the end it should display the count of positive, negative and
// zeros entered. 


#include <stdio.h>
int main(){
    int choice, num;
    int p = 0;
    int n = 0;
    int z = 0;

    do{
        printf("Enter a number of your choice: ");
        scanf("%d", &num);

        if (num > 0) {
            p = p + 1;
        } else if (num == 0) {
            z = z + 1;
        } else {
            n = n + 1;
        }

        printf(" Do you wanna continue this bs? (Yes = 1, No = 0): ");
        scanf("%d", &choice);
        

    } while (choice == 1);

    printf("\n Positive integers = %d", p);
    printf("\n Negative integers = %d", n);
    printf("\n Zeros = %d", z);


    return 0;

    
}