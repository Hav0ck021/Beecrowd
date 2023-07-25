#include <stdio.h>


void escolherMes (int *k) {
    if(*k == 1)  printf("January\n");
    else if (*k == 2)  printf("February\n");
    else if (*k == 3)  printf("March\n");
    else if (*k == 4)  printf("April\n");
    else if (*k == 5)  printf("May\n");
    else if (*k == 6)  printf("June\n");
    else if (*k == 7)  printf("July\n");
    else if (*k == 8)  printf("August\n");
    else if (*k == 9)  printf("September\n");
    else if (*k == 10)  printf("October\n");
    else if (*k == 11)  printf("November\n");
    else if (*k == 12)  printf("December\n");
}


int main()
{
    int k;

    scanf("%d", &k);

    escolherMes(&k);

    return 0;
}
