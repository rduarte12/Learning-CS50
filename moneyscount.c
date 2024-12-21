#include <stdio.h>

int main (void)
{
    float a = 0.25;
    float b = 0.10;
    float c = 0.05;
    float d = 0.01;
    float f = 0;

    int moedas = 0;

    do{
        printf("Quanto de troco deseja receber?\n ");
        scanf("%f", &f);
    }while(f < 0);

    while(f >= a) {
        f -=a;
        moedas++;
    }
    while(f >= b) {
        f -= b;
        moedas++;
    }
    while(f >= c) {
        f -= c;
        moedas++;
    }
    while(f >= d) {
        f -= d;
        moedas++;
    }

    printf("Você recberá %d moedas de troco! !Espero ter ajudado ;-)\n", moedas);
}

