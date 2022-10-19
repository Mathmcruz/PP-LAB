#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ma, mi;
    printf("Digite uma letra maiuscula \n");
    ma = getchar();
    mi = ma + 32;
    printf("A letra convertida para minuscula eh %c", mi);
    return 0;
}
