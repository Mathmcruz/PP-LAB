#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R, G, pi;
    pi=3.141592;
    printf("digite um angulo em radianos\n");
    scanf("%f", &R);
    G=R*180/pi;
    printf("o angulo em graus eh %f", G);
    return 0;
}
