#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c1, c2, h;
    printf("Digite a coordenada do ponto x \n");
    scanf("%f", &c1);
    printf("Digite a coordenada do ponto y \n");
    scanf("%f", &c2);
    h = sqrt((c1*c1)+(c2*c2));
    printf("a distancia dos pontos (%f, %f) a origem (0, 0) eh %f", c1, c2, h);
    return 0;
}
