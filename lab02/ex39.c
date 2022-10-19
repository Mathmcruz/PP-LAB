#include <stdio.h>
#include <stdlib.h>

int main()
{
    float g1, g2, g3, vt;
    vt = 780000;
    g1 = vt * 0.46;
    g2 = vt * 0.32;
    g3 = vt - (g1 + g2);
    printf("o primeiro ganhador vai receber %f\n"
           "o segundo ganhador vai receber %f\n"
           "o terceiro ganhador vai receber %f\n", g1, g2, g3);
    return 0;
}
