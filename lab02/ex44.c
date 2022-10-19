#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, hd;
    int n;
    printf("Digite a altura em cm do degrau \n");
    scanf("%f", &h);
    printf("Digite a altura em cm que deseja subir \n");
    scanf("%f", &hd);
    n = hd / h;
    printf("O usuario deve subir no minimo %d degraus", n);
    return 0;
}
