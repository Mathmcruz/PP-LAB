#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, m;
    printf("digite uma velicidade em metros por segundo\n");
    scanf("%f", &m );
    k= m*3.6;
    printf("a velocidade em km por hora eh %f", k);
    return 0;
}
