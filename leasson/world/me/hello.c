#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    //Get the user's name
    string name = get_string("What is your name?\n");

    //Print the user's name
    printf("hello, %s\n", name);
    return 0;
}
