#include <stdio.h>

int main()
{
    int idade, soma = 0;
    float media, cont;

    for (cont = 0.0; cont >= 0.0; cont++)
    {
        scanf("%d", &idade);
        if (idade < 0)
            break;
        else
        {
            soma += idade;
        }
    }

    media = soma / cont;

    printf("%.2f\n", media);

    return 0;
}