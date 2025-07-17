// Write a program for a matchstick game being played between
// the computer and a user. Your program should ensure that the
// computer always wins. Rules for the game are as follows:
// − There are 21 matchsticks.
// − The computer asks the player to pick 1, 2, 3, or 4
// matchsticks.
// − After the person picks, the computer does its
// picking.
// − Whoever is forced to pick up the last matchstick
// loses the game. 



#include <stdio.h>
int main(){
    int ms = 21;
    int num, cum, i, choice;

    printf(" Yo, we playing a game of sticks\n");
    printf(" Here are 21 matchsticks.\n");
    printf(" You have to pick between 1-4.\n");
    printf(" Whoever picks last one, loses.\n");

    

    do  {
        ms = 21;
        for (i = 1; ms > 1; i++) {
            printf("\n Matchsticks left: %d\n", ms);
            printf(" Pick your poison(1-4): ");
            scanf("%d", &num);

            if ((num < 1) || (num > 4)){
                printf("\n YOU STUPID! Pick between 1 and 4.\n");
                i--;
                continue;
            }

            ms = ms - num;

            cum = 5 - num;
            printf(" Computer picks: %d\n", cum);

            ms = ms - cum;

            if (ms == 1) {
                printf("\n Only 1 matchstick remains\n");
                printf(" AHAHHAHA! LOSER! YOU LOST TO A F'ing COMPUTER\n");
                break;
            }
        }

        printf("\n Do you want to try again? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1); 

    return 0;
}