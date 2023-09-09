#include <stdio.h>

int main() {

    int k;
    int divi[] = {100, 50, 20, 10, 5, 2, 1};
    int len = sizeof(divi)/sizeof(divi[0]);

    scanf("%d", &k);

    printf("%d\n", k);

    while(k != 0) {
        int tot = 0;
        for (int i = 0; i < len; i++){
            while (k - divi[i] >= 0) {
                k -= divi[i];
                tot++;
            }
            printf("%d nota(s) de R$ %d,00\n", tot, divi[i]);
            tot = 0;
        }
    }
    return 0;
}
