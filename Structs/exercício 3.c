#include <stdio.h>
#include <stdlib.h>

struct produto
    {
    float preço;
    int quantidade;
    float valorArrecadado;
    };

int main ()
{
    struct produto produtoVendido[500];
    int contador;
    float valorTotalArrecadado = 0;

    for (contador = 0; contador < 500; contador ++)
    {
        printf ("\nInsira o preço do produto: ");
        scanf ("%f", &produtoVendido[contador].preço);
        printf ("Insira a quantidade vendida: ");
        scanf ("%d", &produtoVendido[contador].quantidade);
    }
    printf ("\n\n");

    for (contador = 0; contador < 500; contador ++)
    {
       produtoVendido[contador].valorArrecadado = produtoVendido[contador].preço*produtoVendido[contador].quantidade;
       valorTotalArrecadado = valorTotalArrecadado + produtoVendido[contador].valorArrecadado;
       printf ("\nValor arrecadado com o produto %d: %.2f reais", contador+1, produtoVendido[contador].valorArrecadado);
    }
    printf ("\nValor total arrecadado: %.2f reais.", valorTotalArrecadado);

    printf ("\n\n\n\n\n");
    return 0;
}