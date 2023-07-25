#include <stdio.h>

int qtdFatoriais (int *numero) {
    int somaFatorial = 0;
    int fatorial[] = {40320, 5040, 720, 120, 24, 6, 2, 1};

    for (int i = 0; i < 8; ++i) {
        somaFatorial += *numero/fatorial[i];
        *numero %= fatorial[i];
    }

    printf("%d\n", somaFatorial);

    return somaFatorial;
}


int main(){
    int num;

    scanf("%d", &num);

    qtdFatoriais(&num);

    return 0;
}
