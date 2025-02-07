# README - Pyramid Builder

## Description

This project implements a pyramid builder that prompts the user for a height between 1 and 10 and then constructs a symmetrical pyramid using `#` symbols.

## Pseudocode

```plaintext
START program

    DEFINE function get_height() AS:
        INIT variable n
        REPEAT:
            PRINT "Let's build a pyramid! What height do you want for the pyramid? (from 1 to 10)"
            n = INPUT integer
        UNTIL n >= 1 AND n <= 10
        RETURN n
    END FUNCTION

    DEFINE function build_pyramid(height) AS:
        INIT current_level = 1
        INIT spaces = 1
        INIT hashes = height - spaces
        INIT hashes2 = 0

        WHILE current_level <= height DO:
            WHILE spaces < height DO:
                PRINT " "
                spaces++
            END WHILE

            WHILE hashes < height DO:
                PRINT "#"
                hashes++
                hashes2++
            END WHILE

            PRINT "  "

            WHILE hashes2 > 0 DO:
                PRINT "#"
                hashes2--
            END WHILE

            PRINT new line

            current_level++
            spaces = current_level
            hashes = height - spaces
        END WHILE
    END FUNCTION

    CALL get_height() -> height
    CALL build_pyramid(height)

END PROGRAM
```

## How to Run

1. Run the program and enter a valid height between 1 and 10.
2. The program will print a symmetrical pyramid.

## Technologies Used

- C Language
- CS50 Library

## Author

Developed by Rafael Mendonça Duarte.

