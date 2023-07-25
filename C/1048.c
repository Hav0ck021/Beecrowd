#include <stdio.h>

int main()
{
    int perc;
    float salario, ajuste;

    scanf("%f", &salario);

    if (salario >= 0.00 && salario <= 400.00) {
        perc = 15;
        ajuste = salario*perc/100.00;
        salario += ajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario, ajuste, perc);
    } else {
        if (salario > 400.00 && salario <= 800.00) {
            perc = 12;
            ajuste = salario*perc/100.00;
            salario += ajuste;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario, ajuste, perc);
        } else {
            if (salario > 800.00 && salario <= 1200.00) {
                perc = 10;
                ajuste = salario*perc/100.00;
                salario += ajuste;
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario, ajuste, perc);
            } else {
                if (salario > 1200.00 && salario <= 2000.00) {
                    perc = 7;
                    ajuste = salario*perc/100.00;
                    salario += ajuste;
                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario, ajuste, perc);
                } else {
                    if (salario > 2000.00) {
                        perc = 4;
                        ajuste = salario*perc/100.00;
                        salario += ajuste;
                        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario, ajuste, perc);
                    }
                }
            }
        }
    }
    return 0;
}
