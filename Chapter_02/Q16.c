// A certain grade of steel is graded according to the following
// conditions:
// (i) Hardness must be greater than 50
// (ii) Carbon content must be less than 0.7
// (iii) Tensile strength must be greater than 5600
// The grades are as follows:
// Grade is 10 if all three conditions are met
// Grade is 9 if conditions (i) and (ii) are met
// Grade is 8 if conditions (ii) and (iii) are met
// Grade is 7 if conditions (i) and (iii) are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the conditions are met
// Write a program, which will require the user to give values of
// hardness, carbon content and tensile strength of the steel
// under consideration and output the grade of the steel. 




#include <stdio.h>
int main() {
    int hard, tens;
    float carb;

    printf(" Enter the Hardness of steel: ");
    scanf("%d", &hard);

    printf(" Enter the Carbon content: ");
    scanf("%f", &carb);

    printf(" Enter the tensile strength: ");
    scanf("%d", &tens);

    if (hard > 50 && carb < 0.7 && tens > 5600) {
        printf("\n Mamacita! You got grade 10 steel right there.");
    } else if (hard > 50 && carb < 0.7 && tens <= 5600) {
        printf("\n Good job! Grade 9 steel.");
    } else if (hard <= 50 && carb < 0.7 && tens > 5600) {
        printf("\n Ok, Grade 8 is ok.");
    } else if (hard > 50 && carb >= 0.7 && tens > 5600) {
        printf("\n Grade 7, you can do better.");
    } else if ((hard > 50) || (carb < 0.7) || (tens > 5600)) {
        printf("\n 6! Grade 6? Come on man.");
    } else {
        printf("\n Fired! Even infant will do better than you... grade 5, yuck.");
    }

    return 0;
}