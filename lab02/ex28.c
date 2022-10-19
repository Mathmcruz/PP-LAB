#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2, v3, soma;
    printf("digite tres valores\n");
    scanf("%f%f%f", &v1, &v2, &v3);
    soma = (v1*v1)+(v2*v2)+(v3*v3);
    printf("A soma dos quadrados dos valores eh %f", soma);
    return 0;
}
