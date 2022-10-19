#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, h, r, pi;
    pi = 3.141592;
    printf("Digite a altura e o raio de um cilidro circular\n");
    scanf("%f%f", &h, &r);
    v = pi*(r*r)*h;
    printf("O volume do cilindro eh %f", v);
    return 0;
}
