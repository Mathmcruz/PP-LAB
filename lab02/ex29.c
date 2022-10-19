#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, m;
    printf("digite quatro notas\n");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    m = (n1+n2+n3+n4)/4;
    printf("A media aritmetica eh %f", m);
    return 0;
}
