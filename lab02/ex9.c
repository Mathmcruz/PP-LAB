#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, c;
    printf("digite uma temperatura em celsius\n");
    scanf("%f", &c );
    k=c+273.15;
    printf("a temperatura em kelvin eh %f", k);
    return 0;
}
