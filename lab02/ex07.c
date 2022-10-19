#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;
    printf("digite uma temperatura em fahrenheit\n");
    scanf("%f", &f );
    c=5.0*(f- 32.0)/9.0;
    printf("a temperatura em celsius eh %f", c);
    return 0;
}
