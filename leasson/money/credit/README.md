# README - Credit Card Validator

## Description

This project implements a credit card validator using the Luhn algorithm. The program takes a credit card number as input, checks its validity, and identifies its brand (AMEX, VISA, or MASTERCARD).

## Pseudocode

```plaintext
START program

    DEFINE function luhn(length, digits[]) AS:
        INIT sum = 0
        INIT second_digit = FALSE
        FOR x FROM length-1 TO 0 DO:
            num = digits[x]
            IF second_digit IS TRUE:
                num *= 2
                IF num > 9 THEN:
                    num -= 9
            sum += num
            second_digit = NOT second_digit
        RETURN sum
    END FUNCTION

    INIT variable credit
    INIT variable number_digits
    INIT variable number_arrays

    REPEAT:
        credit = INPUT("Credit Card Number: ")
    UNTIL credit > 0

    number_digits = COMPUTE number of digits in credit
    number_arrays = number_digits - 1
    CREATE array num_credit of size number_arrays

    FOR i FROM 0 TO number_digits DO:
        num_credit[number_arrays - i] = LAST DIGIT of credit
        REMOVE LAST DIGIT of credit
    END FOR

    IF number_digits IS NOT 13, 15, or 16 THEN:
        PRINT "INVALID"
    ELSE:
        IF num_credit[0] == 3 AND number_digits == 15 THEN:
            IF num_credit[1] == 4 OR num_credit[1] == 7 THEN:
                IF luhn(number_digits, num_credit) % 10 == 0 THEN:
                    PRINT "AMEX"
                ELSE:
                    PRINT "INVALID"
        ELSE IF num_credit[0] == 4 AND (number_digits == 13 OR number_digits == 16) THEN:
            IF luhn(number_digits, num_credit) % 10 == 0 THEN:
                PRINT "VISA"
            ELSE:
                PRINT "INVALID"
        ELSE IF num_credit[0] == 5 AND number_digits == 16 THEN:
            IF num_credit[1] BETWEEN 1 AND 5 THEN:
                IF luhn(number_digits, num_credit) % 10 == 0 THEN:
                    PRINT "MASTERCARD"
                ELSE:
                    PRINT "INVALID"
            ELSE:
                PRINT "INVALID"
        ELSE:
            PRINT "INVALID"
    END IF

END PROGRAM
```

## How to Run

1. Run the program and enter a valid credit card number.
1. The program will print the card brand or `INVALID` if it is not recognized.

## Technologies Used

- C Language
- Luhn Algorithm
- CS50 Library

## Author

Developed by [@rduarte12](https://github.com/rduarte12).

