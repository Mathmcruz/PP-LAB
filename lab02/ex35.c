#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c1, c2, h;
    printf("Digite o valor do 1o e do 2o cateto\n");
    scanf("%f%f", &c1, &c2);
    h = sqrt((c1*c1)+(c2*c2));
    printf("O valor da hipotenusa eh: %f", h);
    return 0;
}
