#include <stdio.h>

// Function prototypes
int get_height(void); // Function to get the pyramid height
void build_pyramid(int a); // Function to build the pyramid

int main(void)
{
    // Gets the pyramid height from the user
    int height = get_height();
    //printf("Your pyramid will be %d blocks high!\n", height);

    // Builds the pyramid with the specified height
    build_pyramid(height);
}

// Asks the user for the desired height of the pyramid
int get_height(void)
{
    int n;
    do
    {
        printf("Let's build a pyramid! What height do you want for the pyramid? (from 1 to 10) ");
        scanf("%i", &n);
    }
    while (n < 1 || n > 10); // Ensures the height is within a valid range
    return n; // Returns the value of n as the height reference
}

// Builds the pyramid based on the specified height
void build_pyramid(int height)
{
    int current_level = 1; // Represents the current level of the pyramid
    int spaces; // Represents the spaces before the blocks
    int hashes; // Represents the number of "#" blocks on each side
    int hashes2;

    // General loop to construct the pyramid
    while (current_level <= height)
    {
        spaces = height - current_level; // Number of spaces before the blocks
        hashes = current_level; // Number of blocks in the first half
        hashes2 = hashes; // Number of blocks in the second half

        // Loop to print spaces
        while (spaces > 0)
        {
            printf(" ");
            spaces--;
        }

        // Loop to print "#" blocks on the left side
        while (hashes > 0)
        {
            printf("#");
            hashes--;
        }

        // Space between the two halves of the pyramid
        printf("  ");

        // Loop to print "#" blocks on the right side
        while (hashes2 > 0)
        {
            printf("#");
            hashes2--;
        }

        // Move to the next level
        current_level++;
        printf("\n"); // New line for the next level of the pyramid
    }
}
