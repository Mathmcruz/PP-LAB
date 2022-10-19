#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, C;
    printf("digite um comprimento em polegadas\n");
    scanf("%f", &P);
    C = P*2.54;
    printf("o comprimento em centimetros eh %f", C);
    return 0;
}
