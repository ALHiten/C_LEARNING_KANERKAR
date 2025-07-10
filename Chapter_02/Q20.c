// In a company, worker efficiency is determined on the basis of
// the time required for a worker to complete a particular job. If
// the time taken by the worker is between 2 – 3 hours, then the
// worker is said to be highly efficient. If the time required by
// the worker is between 3 – 4 hours, then the worker is ordered
// to improve speed. If the time taken is between 4 – 5 hours, the
// worker is given training to improve his speed, and if the time
// taken by the worker is more than 5 hours, then the worker has
// to leave the company. If the time taken by the worker is input
// through the keyboard, find the efficiency of the worker. 



#include <stdio.h>
int main() {
    float t;

    printf(" Time taken to do the work(in Hours): ");
    scanf("%f", &t);

    if (t <= 0) {
        printf(" You are a time traveller or smtg? \n write the correct time.");
    } else if (t < 2) {
        printf(" Damn! Keep it up and you will be promoted.");
    } else if (t >= 2 && t < 3) {
        printf(" Noice work man! ");
    } else if (t >= 3 && t < 4) {
        printf(" I believe, you can improve.");
    } else if (t >= 4 && t < 5) {
        printf(" Go to training room rn. No excuse!");
    } else {
        printf(" YOU ARE FIRED! ");
    }

    return 0;
}