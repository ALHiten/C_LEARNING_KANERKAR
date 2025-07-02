// If a five-digit number is input through the keyboard, write a
// program to print a new number by adding one to each of its
// digits. For example if the number that is input is 12391 then
// the output should be displayed as 23402. 



#include <stdio.h>
int main() {
    int d1, d2, d3, d4, d5, num;
    int nd1, nd2, nd3, nd4, nd5;

    printf("\n Enter a five-digit number: ");
    scanf("%d", &num);

    d5 = num % 10;
    num = num / 10;
     
    d4 = num % 10;
    num = num / 10;
     
    d3 = num % 10;
    num = num / 10;

    d2 = num % 10;
    num = num / 10;

    d1 = num % 10;
    num = num / 10;

    nd1 = (d1 + 1) % 10;
    nd2 = (d2 + 1) % 10;
    nd3 = (d3 + 1) % 10;
    nd4 = (d4 + 1) % 10;
    nd5 = (d5 + 1) % 10;

    printf("\n New number = %d%d%d%d%d\n", nd1, nd2, nd3, nd4, nd5);

    return 0;
    
}
