#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p, j1, j2, j3, t;
    printf("Digite o valor do premio \n");
    scanf("%f", &p);
    printf("Digite o valor investido pelo jogador 1 \n");
    scanf("%f", &j1);
    printf("Digite o valor investido pelo jogador 2 \n");
    scanf("%f", &j2);
    printf("Digite o valor investido pelo jogador 3 \n");
    scanf("%f", &j3);
    t = (j1 + j2) + j3;
    printf("O jogador 1 vai receber %f\n"
           "O jogador 2 vai receber %f\n"
           "O jogador 3 vai receber %f\n",
           j1 / t * p, j2 / t * p, j3 / t * p);
    return 0;
}
