// A'n' I'n'sura'n'ce compa'n'y follows followi'n'g rules to calculate
// premium.
// (1) If a perso'n'’s health is excelle'n't a'n'd the perso'n' is betwee'n'
// 25 a'n'd 35 years of age a'n'd lives i'n' a city a'n'd is a male
// the'n' the premium is Rs. 4 per thousa'n'd a'n'd his policy
// amou'n't ca'n''n'ot exceed Rs. 2 lakhs.
// (2) If a perso'n' satisfies all the above co'n'ditio'n's except that
// the sex is female the'n' the premium is Rs. 3 per thousa'n'd
// a'n'd her policy amou'n't ca'n''n'ot exceed Rs. 1 lakh.
// (3) If a perso'n'’s health is poor a'n'd the perso'n' is betwee'n' 25
// a'n'd 35 years of age a'n'd lives i'n' a cityage a'n'd is a male 
// the'n' the premium is Rs. 6 per thousa'n'd a'n'd his policy
// ca'n''n'ot exceed Rs. 10,000.
// (4) I'n' all other cases the perso'n' is 'n'ot i'n'sured.
// Write a program to output whether the perso'n' should be
// i'n'sured or 'n'ot, his/her premium rate a'n'd maximum amou'n't
// for which he/she ca'n' be i'n'sured. 




#include <stdio.h>

int main() {
    int age;
    char sex, heal, poor, city;

    printf("NAME: \n");
    printf("Jk, I don't really care \n\n");

    printf("Age: ");
    scanf("%d", &age);

    printf("Sex (M/F): ");
    scanf(" %c", &sex);

    printf("Are ya healthy? (Y/N): ");
    scanf(" %c", &heal);

    printf("Are ya poor? (Y/N): ");
    scanf(" %c", &poor);

    printf("You live in a city or smtg? (Y/N): ");
    scanf(" %c", &city);

    if (age >= 25 && age <= 35 && sex == 'M' && heal == 'Y' && poor == 'N' && city == 'Y') {
        printf("\nYour premium is Rs. 4 per thousand and your policy amount cannot exceed Rs. 2 lakhs.\n");
    } else if (age >= 25 && age <= 35 && sex == 'F' && heal == 'Y' && poor == 'N' && city == 'Y') {
        printf("\nListen Lady! Your premium is Rs. 3 per thousand and your policy amount cannot exceed Rs. 1 lakh.\n");
    } else if (age >= 25 && age <= 35 && sex == 'M' && heal == 'N' && poor == 'Y' && city == 'N') {
        printf("\nSorry man, but your premium is Rs. 6 per thousand and policy cannot exceed Rs. 10,000.\n");
    } else {
        printf("\nLmao, You ain't eligible at all.\n");
    }

    return 0;
}
