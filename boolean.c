#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n", i); // Corrigido para passar o argumento i para printf
}

// solicita um numero inteiro positivo ao usuario
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Numero positivo: \n");
    }
    while(n < 1);
    return n;
}


