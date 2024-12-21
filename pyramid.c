#include <stdio.h>

// Prototype
int get_height(void);
void build_pyramid(int a);

int main(void)
{
    int height = get_height();
    printf("A sua pirâmide terá %d blocos de altura!\n", height);
    build_pyramid(height);
}

// Solicita a altura
int get_height(void)
{
    int n;
    do
    {
        printf("Vamos contruir uma pirâmide, qual a altura você deseja para a pirâmide?(de 1 a 10) ");
        scanf("%i", &n);
    }
    while (n < 1 || n > 10);
    return n; // retornar o valor de n como valor referente a "altura"
}

// Construção da pirâmide
void build_pyramid(int height)
{

    int current_level = 1;     // define o funcionamento do looping "costruir"
    int spaces = 1;     // define o funcionamento do looping de "spaces"
    int hashes = height - spaces; // define o funcionamento do looping "spaces"
    int hashes2 = 0;

    // looping geral
    while (current_level <= height)
    {
        // looping de "spaces"
        while (spaces < height)
        {
            printf(" ");
            spaces++;
        }
        // First looping of "#"
        while (hashes < height)
        {
            printf("#");
            hashes++;
            hashes2++;
        }

        printf("  ");

        //Second loop of "#"
        while (hashes2 > 0)
        {
            printf("#");
            hashes2--;
        }

        current_level++;

        // redefinir valores das variaveis condicionais
        spaces = current_level;
        hashes = height - spaces;

        printf("\n");
    }
}
