#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("digite dois numeros\n");
    scanf("%f%f", &n1, &n2);
    if(n1>n2){
        printf("%f eh o maior numero\n", n1);
    }else{
    printf("%f eh o maior numero\n", n2);
    }
    return 0;
}
