#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, k;
    printf("Digite uma massa em libras\n");
    scanf("%f", &l);
    k=l * 0.45;
    printf("A massa em Kg eh: %f", k);
    return 0;
}
