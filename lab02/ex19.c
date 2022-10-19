#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m3, L;
    printf("digite um valor em litros\n");
    scanf("%f", &L);
    m3 = L /1000;
    printf("o valor em metros cubicos eh %f", m3);
    return 0;
}
