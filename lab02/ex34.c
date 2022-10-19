#include <stdio.h>
#include <stdlib.h>

  int  main()
{
    float pi, a, raio;
    pi= 3.141592;
    printf("Digite um valor do raio de um circulo\n");
    scanf("%f%f", &pi, &raio);
    a=pi*(raio*raio);
    printf("A area do circulo correspondente e %f", a);
    return 0;
}
