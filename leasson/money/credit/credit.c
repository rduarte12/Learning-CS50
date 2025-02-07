#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * This code has the function of verifying if a credit card is valid or not.
 *
 * First, the code will ask for the credit card number.
 * Second, the code will compute the number of digits.
 * Third, the code will store each digit in an array.
 * Fourth, according to the number of digits,
 * the code will separate the credit card into 3 types: AMEX, VISA, MASTERCARD.
 * Fifth, the code will verify, according to the credit card type,
 * if the credit card is valid.
 * Finally, using the Luhn algorithm, the code will verify if
 * the credit card is valid or not.
 */

// Prototype
int luhn(int length, int digits[]);

// Global variables
long credit;
int number_digits;
int number_arrays;

// Main function, where the code will run
int main(void)
{
    // Ask for the credit card number and ensure it is positive
    do
    {
        credit = get_long("Credit Card Number: ");
    }
    while (credit <= 0);

    // Compute the number of digits and store each digit in an array
    number_digits = 1 + log10(credit);
    number_arrays = number_digits - 1;
    int num_credit[number_arrays];

    for (int i = 0; i < number_digits; i++)
    {
        num_credit[number_arrays - i] = credit % 10;
        credit = credit / 10;
    }

    // Verify the credit card type and if it is valid
    if (number_digits == 13 || number_digits == 15 || number_digits == 16)
    {
        // Use switch and 'if' with the first two digits of
        // the credit card to verify the type
        switch (num_credit[0])
        {
            case 3:
                if (number_digits == 15)
                {
                    if (num_credit[1] == 4 || num_credit[1] == 7)
                    {
                        if (luhn(number_digits, num_credit) % 10 == 0)
                        {
                            printf("AMEX\n");
                        }
                        else
                        {
                            printf("INVALID\n");
                        }
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
                else
                {
                    printf("INVALID\n");
                }
                break;

            case 4:
                if (number_digits == 13 || number_digits == 16)
                {
                    if (luhn(number_digits, num_credit) % 10 == 0)
                    {
                        printf("VISA\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
                else
                {
                    printf("INVALID\n");
                }
                break;

            case 5:
                if (number_digits == 16)
                {
                    if (num_credit[1] >= 1 && num_credit[1] <= 5)
                    {
                        if (luhn(number_digits, num_credit) % 10 == 0)
                        {
                            printf("MASTERCARD\n");
                        }
                        else
                        {
                            printf("INVALID\n");
                        }
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
                else
                {
                    printf("INVALID\n");
                }
                break;

            default:
                printf("INVALID\n");
                break;
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

/*
 * Luhn algorithm implementation
 *
 * This function computes the checksum using Luhn's algorithm to determine
 * whether a credit card number is valid.
 * It iterates through the digits, doubling every second digit from the right.
 * If the doubled value is greater than 9, 9 is subtracted from it.
 * Finally, it returns the sum of the processed digits.
 */
int luhn(int length, int digits[])
{
    int sum = 0;
    int second_digit = 0; // Determine a flag

    for (int x = length - 1; x >= 0; x--)
    {
        int num = digits[x];

        if (second_digit)
        {
            num *= 2;
            if (num > 9)
            {
                num -= 9;
            }
        }
        sum += num;
        second_digit = !second_digit; //Alternate the flag
    }
    return sum;
}
