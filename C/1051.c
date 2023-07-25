#include <stdio.h>

int main()
{
    float grana, aux;

    scanf("%f", &grana);

    if (grana >= 0.00 && grana <= 2000.00) {
        printf("Isento\n");
    } else {
        if (grana >= 2000.01 && grana <= 3000.00) {
            grana -= 2000.00;
            grana *= 8/100.00;
            printf("R$ %.2f\n", grana);
        }
        if (grana >= 3000.01 && grana <= 4500.00) {
            grana -= 3000.00;
            grana *= 18/100.00;
            aux = grana + 1000* 8/100.00;
            printf("R$ %.2f\n", aux);
        }
        if (grana > 4500.00) {
            grana -= 4500.00;
            grana *= 28/100.00;
            aux = grana + 1500 * 18/100.00 + 1000 * 8/100.00;
            printf("R$ %.2f\n", aux);
        }
    }
    return 0;
}
