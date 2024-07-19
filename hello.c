/* #include <stdio.h>
int main(void)
{
    printf("olá, mundo");
}
*/

#include <cs50.h>
#include <stdio.h>
int main(void)
{
     string answer = get_string("Qual é o seu nome?");
   /* printf("olá, %s", answer);*/
     printf("ola, %s\n" ,answer); // "n" quebra de lingua
}

