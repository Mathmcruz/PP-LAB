#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, n;
    printf("Digite o valor do seu salario atual\n");
    scanf("%f", &s);
    n = s * 1.25;
    printf("O valor do seu novo salario eh %f", n);
    return 0;
}
