#include <stdio.h>

int main()
{
    int i, j, x, min;
    int vet[3], aux[3];

    for (i = 0; i < 3; i++) {
        scanf("%d", &x);
        vet[i] = x;
        aux[i] = vet[i];
    }

    // Ordenação dos números em ordem crescente
    for (i = 0; i < 2; i++) {
        min = i;
        for (j = i + 1; j < 3; j++) {
            if (vet[j] < vet[min]) {
                min = j;
            }
        }
        int temp = vet[min];
        vet[min] = vet[i];
        vet[i] = temp;
    }

    for (i = 0; i < 3; i++) {
        printf("%d\n", vet[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        printf("%d\n", aux[i]);
    }

    return 0;
}
