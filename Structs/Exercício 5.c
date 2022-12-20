#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct seleções
    {
        char nome[20];
        float altura;
    };

int main ()
{
    struct seleções matrizseleções[5][10];
    int linha, coluna;
    char maisAlto[20];
    float maiorAltura = 0;

    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 10; coluna ++)
        {
            printf ("Insira a altura do jogador %d da seleção %d: ", coluna+1, linha+1);
            scanf (" %f", &matrizseleções[linha][coluna].altura);
            printf ("Insira o nome do jogador %d da seleção %d: ", coluna+1, linha+1);
            scanf (" %s", &matrizseleções[linha][coluna].nome);
        }
        printf ("\n");
    }

    for (linha = 0; linha < 5; linha ++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            if (maiorAltura < matrizseleções[linha][coluna].altura)
            {
                strcpy (maisAlto,matrizseleções[linha][coluna].nome);
            }
        }
        printf ("\nMais alto da seleção %d: %s", linha+1, maisAlto);
    }
    printf ("\n\n\n\n\n");
    return 0;
}