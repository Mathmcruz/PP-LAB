#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, c;
    printf("digite uma temperatura em kelvin\n");
    scanf("%f", &k );
    c=k-273.15;
    printf("a temperatura em celsius eh %f", c);
    return 0;
}
