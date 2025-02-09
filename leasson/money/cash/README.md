# README - Change Calculator

## Description

This project implements a change calculator that determines the minimum number of coins needed to provide change for a given amount. The program prompts the user for an input amount and then calculates the optimal combination of quarters, dimes, nickels, and pennies.

## Pseudocode

```plaintext
START program

    DEFINE coin values:
        quarter = 25
        dime = 10
        nickel = 5
        penny = 1
    END DEFINE

    INIT variable changeOwed
    INIT variable coins = 0

    REPEAT:
        changeOwed = INPUT("Change owed: ")
    UNTIL changeOwed >= 0

    WHILE changeOwed >= quarter DO:
        changeOwed -= quarter
        coins++
    END WHILE

    WHILE changeOwed >= dime DO:
        changeOwed -= dime
        coins++
    END WHILE

    WHILE changeOwed >= nickel DO:
        changeOwed -= nickel
        coins++
    END WHILE

    WHILE changeOwed >= penny DO:
        changeOwed -= penny
        coins++
    END WHILE

    PRINT "You will receive", coins, "coins"

END PROGRAM
```

## How to Run

1. Run the program and enter a valid amount of change.
2. The program will output the minimum number of coins needed.

## Technologies Used

- C Language
- CS50 Library

## Author

Developed by [@rduarte12](https://github.com/rduarte12)

