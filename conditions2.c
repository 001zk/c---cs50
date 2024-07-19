
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Solicita um caractere para o usuário
    char c = get_char("Você concorda? ");

    // Verifica se concordou
    if (c == 's' || c == 'S')
    {
        printf("Concordo.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Não concordo.\n");
    }
    else
    {
        printf("Resposta inválida.\n");
    }

    return 0;
}
