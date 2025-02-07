#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int popi = 0; // Initial population
int popf = 0; // Final population
int years = 0;

int main(void)
{
    // Input for initial and final population
    do
    {
        printf("Initial population: \n");
        scanf("%d", &popi);
    } while (popi < 9); // Ensures the initial population is at least 9

    do
    {
        printf("Final population: \n");
        scanf("%d", &popf);
    } while (popf < popi); // Ensures the final population is not smaller than the initial population

    // If the initial and final populations are the same, no years are needed
    if (popf == popi)
    {
        printf("The population will remain the same, so it will take 0 years.\n");
    }
    else
    {
        int d = (int)floor(popf / popi); // Calculates the population growth ratio
        years = (log(d) / log(1.083)); // Computes the number of years based on a growth rate of 8.3%

        // Ensures at least one year is counted if the computed value is less than 1
        if (years < 1)
        {
            years++;
            printf("Answer: %d years\n\n", years);
        }
        else
        {
            printf("Answer: %d years\n\n", years);
        }
    }
}
