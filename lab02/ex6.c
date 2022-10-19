#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;
    printf("digite uma temperatura em celsius\n");
    scanf("%f", &c );
    f=c*(9.0/5.0)+32.0;
    printf("a temperatura em fahrenheit eh %f", f);
    return 0;
}
