#include <stdio.h>
#include <stdlib.h>

//System for the user discover your age

//Variable wich with the input of the user, will define your name
char str[100];


int main(void)
{
    //Variable wich with the input of the user, will define your age
    double idade;

    //Ask the user for your name
    printf("What is your name? ");
    scanf("%s", str);

    //Clear the screen
    system("clear");

    //Print the name of the user and ask for your age
    printf("Hello, %s!\n", str);
    printf("For you discover your age, please, tell me how long are you living: ");
    scanf("%lf", &idade);

    system("clear");

        //Compare the age of the user and print the result
        if (idade < 0)
        {
            printf("Well, you are not born yet!\n\n");
        }
        else if (idade < 12)
        {
            printf("%s, you have %.2lf years old and you are a child!\n\n", str, idade);
        }
        else if (idade < 16)
        {
            printf("%s, you have %.2lf years old and you are a teenager!\n\n", str, idade);
        }
        else
        {
            printf("%s, you have %.2lf years old and you are very very old!\n\n", str, idade);
        }
    }
