#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, m;
    printf("digite uma velicidade em km por hora\n");
    scanf("%f", &k );
    m= k/3.6;
    printf("a velocidade em metros por segundo eh %f", m);
    return 0;
}
