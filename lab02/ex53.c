#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, l, tl, v;
    printf("Digite a largura do terreno \n");
    scanf("%f", &l);
    printf("Digite o comprimento do terreno \n");
    scanf("%f", &c);
    printf("Digite o valor do metro da tela \n");
    scanf("%f", &tl);
    v = (l * l + c * c) * tl;
    printf("O valor para cercar o terreno eh %f", v);
    return 0;
}
