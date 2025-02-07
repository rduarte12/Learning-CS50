#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int popi = 0; //initial population
int popf = 0; //final population
int years = 0;


int main(void)
{
    //input of initial and final population
    do
    {
    printf("Initial population: \n");
    scanf("%d", &popi);
    }while(popi < 9);

    do
    {
    printf("Final population: \n");
    scanf("%d", &popf);
    }while(popf < popi);

    if(popf == popi)
    {
        printf("The population will remain the same, so it will take 0 years.\n");
    }else{

    int d = (int)floor(popf / popi);

    years = (log(d)/log(1.083));

    if(years < 1){
        years++;
        printf("Answer: %d years\n\n", years);
    }else{
        printf("Answer: %d years\n\n", years);
    }

    }


}
