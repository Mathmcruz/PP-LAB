2)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, *vet;
    printf("Escreva o tamanho do vetor: ");
    scanf("%d", &t);
    vet = (int*) malloc(t*sizeof(int));
    for(int i=0; i<t; i++){
        printf("\nEscreva o %do valor do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\nOs valores do vetor: ");
    for(int i=0; i<t; i++){
        printf(i!=t-1 ? "%d, " : "%d.", vet[i]);
    }
    free(vet);
    return 0;
}


4)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    char *str;
    printf("Escreva o tamanho da string: ");
    scanf("%d", &t);
    setbuf(stdin, NULL);
    str = (char*) malloc(t*sizeof(char));
    printf("Escreva a string: ");
    fgets(str, t, stdin);
    printf("String sem as vogais: ");
    for(int i=0; i<t; i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            printf("%c", str[i]);   
        }
    }    
    free(str);
    return 0;
}

6)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t_mem, *mem;
    int pos, val, op, i;
    
    printf("Escreva o tamanho da memoria do computador em bytes: ");
    scanf("%d", &t_mem);
    for(i=0; i<1;){
        if(t_mem%4 != 0){
            printf("Erro.\nEscreva o tamanho da memoria do computador em bytes: ");
            scanf("%d", &t_mem);
        }else{
            i++;
        }
    } 
    t_mem = t_mem/4 -1;
    mem = (int*) malloc(t_mem*sizeof(int));
    for(i=0; i<t_mem; i++){
        mem[i] = 0;
    }
    do{
        printf("\n\t[1] - Inserir valor em determinada posicao");
        printf("\n\t[2] - Consultar valor contido em determinada posição");
        printf("\n\t[3] - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);
        switch(op){
            case 1: printf("Qual posicao deseja? ");
                    scanf("%d", &pos);
                    if(pos<0 || pos>t_mem){
                         printf("Posicao invalida!\n");break;}
                    printf("Qual valor deseja atribuir? ");
                    scanf("%d", &val);
                    mem[pos] = val;break;
            case 2: printf("Qual das posicoes deseja consultar? ");
                    scanf("%d", &pos);
                    if(pos<0 || pos>t_mem){
                         printf("Posicao invalida!\n");break;}
                    printf("O valor da posicao eh: %d", mem[pos]);break;
            case 3: printf("\nSaindo...ate a proxima!");
                    exit(0);}
    }while(op!=3);
    exit(0);
    return 0;
}

8)#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i;
    int zero=0;
    p = (int*) calloc(1500,sizeof(int));
    for(i=0; i<1500; i++){
        p[i] = 0;
        if(p[i] == 0){
            zero++;
        }
    }
    if(zero == 1500){
        printf("Vetor inicializado com todos os 1500 valores igual a zero!\n");
    }else{
        printf("Erro!\n");
    }
    for(i=0; i<1500; i++){
        p[i] = i;
    }
    printf("Os 10 primeiros valores do vetor: ");
    for(i=0; i<10; i++){
        printf(i!=9 ? "%d, " : "%d.\n", p[i]);
    }
    printf("Os 10 ultimos valores do vetor: ");
    for(i=1490; i<1500; i++){
        printf(i!=1499 ? "%d, " : "%d.", p[i]);
    }
    return 0;
}

10)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    float t, *p;
    int i, m10=0;
    for( ; m10<1; ){
        printf("Escreva o tamanho que deseja do vetor: ");
        scanf("%f", &t);
        if(t>=10){
            m10++;
        }else{
            printf("Erro! O vetor deve ter 10 ou mais posicoes! ");
        }
    }
    p = (float*) malloc(t*sizeof(float));
    printf("\nOs 10 primeiros valores do vetor: ");
    for(i=0; i<10; i++){
        p[i] = rand() % 100;
        printf(i!=9 ? "%.2f, " : "%.2f.\n", p[i]);
    }
    return 0;
}

12)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto{
    char nome[51];
    int cod;
    int estoque;
    float preco;
};

int main()
{
    struct produto *p;
    int n, mquantidade;
    int x, y, i;
    float mpreco;
    printf("Quantos produtos serao cadastrados? ");
    scanf("%d", &n);
    setbuf(stdin, NULL);
    p = (struct produto*) malloc(n*sizeof(struct produto));
    for(i=0; i<n; i++){
        printf("\nProduto %d\n", i+1);
        printf("\tEscreva o nome: ");
        fgets(p[i].nome, 51, stdin);
        setbuf(stdin, NULL);
        printf("\tEscreva o codigo: ");
        scanf("%d", &p[i].cod);
        setbuf(stdin, NULL);
        printf("\tEscreva a quantidade em estoque: ");
        scanf("%d", &p[i].estoque);
        setbuf(stdin, NULL);
        printf("\tEscreva o preco: ");
        scanf("%f", &p[i].preco);
        setbuf(stdin, NULL);
        if(i == 0){
            mpreco = p[i].preco;
            mquantidade = p[i].estoque;
            x = 0;
            y = 0;
        }else if(mpreco < p[i].preco){
            mpreco = p[i].preco;
            x = i;
        }else if(mquantidade < p[i].estoque){
            mquantidade = p[i].estoque;
            y = i; 
        }
    }
    printf("Produto com maior preco: %s, valor R$ %.2f.", p[x].nome, p[x].preco);
    printf("\nProduto com maior quantidade em estoque: %s, com %d unidades.", p[y].nome, p[y].estoque);
    return 0;
}

14)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float **p, l, c;
    int i, j;
    printf("Escreva o numero de linhas e colunas da matriz: ");
    scanf("%f %f", &l, &c);
    p = (float**) malloc(l*sizeof(float));
    for(i=0; i<l; i++){
        p[i] = (float*) malloc(c*sizeof(float));
    }
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("Escreva o valor [%d, %d]: ", i+1, j+1);
            scanf("%f", &p[i][j]);
        }
    }
    printf("\nMatriz:\n");
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("\t%.2f", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}

16)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p;
    int n, m, i, j;
    printf("Escreva o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &n, &m);
    p = (int**) malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        p[i] = (int*) malloc(m*sizeof(int));
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Escreva o valor [%d, %d]: ", i+1, j+1);
            scanf("%d", &p[i][j]);
        }
    }
    printf("\nMatriz:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("\t%d", p[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz Transposta:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\t%d", p[j][i]);
        }
        printf("\n");
    }
    return 0;
}

18)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro{
    char nome[30];
    int cod;
    float preco;
};

int main()
{
    int *vet, **mat, i;
    char **str;
    struct registro *r;
    
    vet = (int*) malloc(8192);
    mat = (int**) malloc(10*sizeof(int));
    for(i=0; i<10; i++){
        mat[i] = (int*) malloc(10*sizeof(int));
    }
    r = (struct registro*) malloc(50*sizeof(struct registro));
    str = (char**) malloc(100*sizeof(char));
    for(i=0; i<10; i++){
        str[i] = (char*) malloc(80*sizeof(char));
    }
    return 0;
}

20)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct cidade{
    char nome[30];
    int x;
    int y;
};

int main()
{
    struct cidade *c;
    int n, i, j;
    int **mat;
    printf("Quantas cidades serao armazenadas? ");
    scanf("%d", &n);
    setbuf(stdin, NULL);
    c = (struct cidade*) malloc(n*sizeof(struct cidade));
    for(i=0; i<n; i++){
        printf("Cidade %d\n", i+1);
        printf("\tNome: ");
        fgets(c[i].nome, 30, stdin);
        setbuf(stdin, NULL);
        printf("\tCoordenada X e Y: ");
        scanf("%d %d", &c[i].x, &c[i].y);
        setbuf(stdin, NULL);
    }
    mat = (int**) malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        mat[i] = (int*) malloc(n*sizeof(int));
    }
    printf("Matriz de distancia:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            mat[i][j] = sqrt(pow(c[j].x - c[i].x, 2) + pow(c[j].y - c[i].y, 2));  
            printf("\t%.2f", (float)mat[i][j]);
        }
        printf("\n");
    }
    for( ; i!=9; ){
        printf("\nDigite o numero de duas cidades: ");
        scanf("%d %d", &i, &j);
        i--, j--;
        printf("A distancia entre as cidades eh: %.2f u.m", (float) mat[i][j]); 
    }
    return 0;
        
}
