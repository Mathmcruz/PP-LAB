#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b, r;
    printf("Digite o salario-base de um funcionario \n");
    scanf("%f", &b);
    r = b + (b * 0.05) - (b * 0.07);
    printf("O funcionario vai receber %f", r);
    return 0;
}
