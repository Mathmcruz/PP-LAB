#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, n;
    printf("Digite o ano atual \n");
    scanf("%d", &a);
    printf("Digite sua idade\n");
    scanf("%d", &i);
    n = a - i;
    printf("O ano que voce nasceu eh\n%d", n);
    return 0;
}
