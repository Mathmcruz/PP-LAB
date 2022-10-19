#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, m;
    printf("digite uma distancia em milhas\n");
    scanf("%f", &m );
     k=1.61*m;
    printf("a distancia em quilometros eh %f", k);
    return 0;
}
