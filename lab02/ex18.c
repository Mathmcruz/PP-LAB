#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m3, L;
    printf("digite um valor em metros cubicos\n");
    scanf("%f", &m3);
    L = 1000*m3;
    printf("o valor em litros eh %f", L);
    return 0;
}
