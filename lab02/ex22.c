#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j, m;
    printf("digite um comprimento em jardas\n");
    scanf("%f", &j );
    m= 0.91*j;
    printf("o comprimento em metros eh %f", m);
    return 0;
}
