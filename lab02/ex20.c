#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, L;
    printf("digite um valor em quilogramas\n");
    scanf("%f", &K);
    L = K/0.45;
    printf("o valor em libras eh %f", L);
    return 0;
}
