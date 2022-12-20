#include <stdio.h>
#include <stdlib.h>

struct pessoa
    {
    char nome[20];
    int idade;
    };

int main ()
{
    struct pessoa pessoa[300];
    int contador, somaDasIdades = 0;
    float mediaDasIdades; 

    
    for (contador = 0; contador < 300; contador++)
    {
        printf ("\nInsira o nome: ");
        scanf (" %s", pessoa[contador].nome);
        printf ("Insira a idade: ");
        scanf ("%d", &pessoa[contador].idade);

        somaDasIdades = somaDasIdades + pessoa[contador].idade;
    }
    
    mediaDasIdades = somaDasIdades/300;

    for (contador = 0; contador < 300; contador ++)
    {
        if ((pessoa[contador].idade) > mediaDasIdades)
        {
            printf ("\n%s", pessoa[contador].nome);
        }
    }
    
    printf ("\n\n\n");
    return 0;
}