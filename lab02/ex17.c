#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, C;
    printf("digite um comprimento em centimetros\n");
    scanf("%f", &C);
    P = C/2.54;
    printf("o comprimento em polegadas eh %f", P);
    return 0;
}
