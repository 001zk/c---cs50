#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 1; j++) // Corrigido: j < i + 1 para imprimir hashes conforme a linha atual (pirâmide)
        {
            printf("#"); // Corrigido: Adicionado ponto e vírgula aqui
        }
        printf("\n");
    }
}
