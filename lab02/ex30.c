#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, d;
    printf("Digite um valor em reais\n");
    scanf("%f", &r);
    d = r/5.29;
    printf("O valor equivalente em dolares eh %f", d);
    return 0;
}
