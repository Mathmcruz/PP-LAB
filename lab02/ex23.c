#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j, m;
    printf("Digite um comprimento em metros\n");
    scanf("%f", &m);
    j = m / 0.91;
    printf("O comprimento em jardas eh: %2.f", j);
    return 0;
}
