#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, a;
    printf("Digite o valor de um dos lados de um quadrado\n");
    scanf("%f", &l);
    a = l*l;
    printf("A area do quadrado eh %f", a);
    return 0;
}
