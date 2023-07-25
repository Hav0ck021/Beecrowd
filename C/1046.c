#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int tempo = 24 - a;

    if (a == b) {
        tempo += b;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    } else {
        if (a > b) {
            tempo += b;
            printf("O JOGO DUROU %d HORA(S)\n", tempo);
        } else {
            b -= a;
            printf("O JOGO DUROU %d HORA(S)\n", b);
        }
    }

    return 0;
}
