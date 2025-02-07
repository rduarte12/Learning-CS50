Here's a README in English for the code you provided:

# README - Population Growth Calculator

## Description

This program calculates the number of years it takes for a population to grow from an initial size to a final size, based on an annual growth rate of 8.3%. The user is prompted to input the initial and final populations, and the program calculates the number of years required for the population to grow according to the given growth rate.

## How to Run

1. Compile and run the program.
2. Enter the initial population (must be at least 9).
3. Enter the final population (must be greater than or equal to the initial population).
4. The program will calculate and print the number of years required for the population to grow based on the 8.3% growth rate.

## Pseudocode

```plaintext
START program

    DEFINE initial population (popi)
    DEFINE final population (popf)
    DEFINE years

    INPUT initial population (popi) FROM user (popi >= 9)
    INPUT final population (popf) FROM user (popf >= popi)

    IF initial population equals final population:
        PRINT "The population will remain the same, so it will take 0 years."
    ELSE:
        CALCULATE the growth ratio (d) FROM final population and initial population
        CALCULATE years based on the growth ratio and the 8.3% growth rate
        IF calculated years is less than 1:
            SET years to 1
        PRINT years
    END IF

END program
```

## Technologies Used

- C Language
- Standard C Library (math.h, stdlib.h)

## Author

Developed by Rafael Mendonça Duarte.
