#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Define the values of the coins in cents
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    int changeOwed; // Variable to store the amount of change owed
    int coins = 0;  // Counter for the number of coins used

    // Prompt the user for a valid amount of change (non-negative)
    do
    {
        changeOwed = get_int("Change owed: ");
    }
    while (changeOwed < 0);

    // Calculate the number of quarters needed
    while (changeOwed >= quarter)
    {
        changeOwed -= quarter;
        coins++;
    }

    // Calculate the number of dimes needed
    while (changeOwed >= dime)
    {
        changeOwed -= dime;
        coins++;
    }

    // Calculate the number of nickels needed
    while (changeOwed >= nickel)
    {
        changeOwed -= nickel;
        coins++;
    }

    // Calculate the number of pennies needed
    while (changeOwed >= penny)
    {
        changeOwed -= penny;
        coins++;
    }

    // Print the total number of coins given as change
    printf("You will receive %d coins\n", coins);
}
