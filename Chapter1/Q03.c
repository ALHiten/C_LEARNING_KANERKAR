// If the marks obtained by a student in five different subjects
// are input through the keyboard, find out the aggregate marks
// and percentage marks obtained by the student. Assume that
// the maximum marks that can be obtained by a student in each
// subject is 100. 


#include <stdio.h>


int main (){
    float Physics, Chemistry, Maths, English, AI ;
    float total, percentage;

    printf("Enter marks for 5 subjects (out of 100 each)\n");
    printf("\n Physics:");
    scanf("%f", &Physics);
    printf("\n Chemistry:");
    scanf("%f", &Chemistry);
    printf("\n Maths:");
    scanf("%f", &Maths);
    printf("\n English:");
    scanf("%f", &English);
    printf("\n AI:");
    scanf("%f", &AI);

    total = Physics + Chemistry + Maths + English + AI;
    percentage = (total / 500) * 100;

    printf("\n Aggregate (total marks) = %.2f\n", total);
    printf("\n Percentage = %.2f%%\n", percentage);


    return 0;

}