#include <stdio.h>

int main()
{
    int num, i, cont, qtd, div;

    scanf("%d", &qtd);

    for(i = 1; i <= qtd; i++)
    {
        scanf("%d", &num);

        cont = 0;

        for(div = 1; div <= num; div++)
        {
            if(num % div == 0)

            cont++;
        }
        if(cont == 2)
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);
    }

    return 0;
}