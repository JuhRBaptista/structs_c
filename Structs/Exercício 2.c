#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
    {
    char nome[20];
    char sexo[10];
    };
int main ()
{   
    struct pessoa pessoa[200];
    int contador;

    for (contador = 0; contador < 200; contador ++)
    {
        printf ("\nInsira o nome: ");
        scanf (" %s", &pessoa[contador].nome);
        printf ("Insira o sexo (f ou m): ");
        scanf (" %s", &pessoa[contador].sexo);
    }


    printf ("\n\nMulheres: ");
    for (contador = 0; contador < 200; contador ++)
    {
        if (strcmp (pessoa[contador].sexo, "f") == 0)
        {
            printf ("\n%s", pessoa[contador].nome);
        }
    }

    printf ("\n\nHomens: ");
    for (contador = 0; contador < 200; contador ++)
    {
        if (strcmp (pessoa[contador].sexo, "m") == 0)
        {
           printf ("\n%s", pessoa[contador].nome);
        }
    }
    
    printf ("\n\n\n\n");
    return 0;
}