#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, m;
    printf("Digite uma area em hectares\n");
    scanf("%f", &h);
    m = h * 10000;
    printf("O valor em metros quadrados eh: %f", m);
    return 0;
}
