/*#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");

    int y = get_int("y: ");

    printf("%i\n", x + y );

}  o maximo do get_int é 32b, e ele retorna o alerta caso mande um nummero muito grande
*/

#include <cs50.h>
#include <stdio.h>

int main (void)
{
    long x = get_long("x: ");

    long y = get_long("y: " );

    printf("%li\n", x + y );
    
}

