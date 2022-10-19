#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seg, h, m, s, rest;
    printf("Digite um tempo em segundos \n");
    scanf("%d", &seg);
    h = seg / 3600;
    rest = seg % 3600;
    m = rest / 60;
    s = rest % 60;
    printf("O tempo em horas, minutos e segundos eh\n %dh %dm %ds \n", h, m, s);
    return 0;
}
