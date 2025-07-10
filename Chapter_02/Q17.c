// A library charges a fine for every book returned late. For first
// 5 days the fine is 50 paise, for 6-10 days fine is one rupee and
// above 10 days fine is 5 rupees. If you return the book after 30
// days your membership will be cancelled. Write a program to
// accept the number of days the member is late to return the
// book and display the fine or the appropriate message. ]

#include <stdio.h> 
int main() {
    int x;

    printf("How long you had the book: ");
    scanf("%d", &x);

    if (x == 5) {
        printf(" Your fine is 50 paise... cash only.");
    } else if (x >= 6 && x <= 10 ) {
        printf(" Man, pay your 1 rs fine.");
    } else if (x > 10 && x < 30) {
        printf(" 5 rs on the left. Don't be late again.");
    } else if (x >= 30) {
        printf(" You F'ed up man!...Your membership has been revoked.");
    } else {
        printf(" You good. Just leave the book here.");
    }

    return 0;
    
}