Vetores


1)
#include <stdio.h>

int main() {
    int A[6]={1, 0, 5, -2, -5, 7};
    int i, soma=0;
    soma= A[0]+A[1]+A[5];
    printf("A soma dos vetores A[0], A[1] e A[5] eh: %d", soma);
    A[4]=100;
    printf("\n\nA[0]=%d\nA[1]=%d\nA[2]=%d\nA[3]=%d\nA[4]=%d\nA[5]=%d", A[0],A[1],A[2],A[3],A[4],A[5]);
    return 0;
}

2)
#include <stdio.h>

int main() {
    float vet[8], soma=0;
    int x, y, i;
    for(i=0;i<8;i++){
    printf("Digite o %do valor: ", i+1);
    scanf("%f", &vet[i]);
    }
    printf("Digite o valor(posicao) de x: ");
    scanf("%d", &x);
    printf("Digite o valor(posicao) de y: ");
    scanf("%d", &y);
    if(x>8 || x<0){
        printf("Numero invalido!");
    }else if(y>8 || y<0){
        printf("Numero invalido!");
    }else{
    soma= vet[x] + vet[y];
    printf("A soma e x e y eh: %.2f", soma);}
    return 0;
}

3)
#include<stdio.h>

int main()
{
    int vet[6], i;
    for(i=0;i<6;i++){
    printf("Digite o %do: ", (i+1));
    scanf("%d", &vet[i]);
    }
    printf("\nA ordem inversa eh: %d, %d, %d, %d, %d, %d", vet[5], vet[4], vet[3], vet[2], vet[1], vet[0]);
    return 0;
}

4)
#include <stdio.h>

int main() {
    int vet[5];
    int i, ma=0, me=0;
    for(i=0; i<5; i++){
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%d", &vet[i]);
        }
        for(i=0; i<5; i++){
            if(vet[i]>vet[ma]){
              ma = i;}
        }
        for(i=0;i<5;i++){
            if(vet[i]<vet[me]){
             me = i;}
        }
        printf("O maior numero esta na posicao: %d", ma);
        printf("\nO menor numero esta na posicao: %d", me);
    return 0;
}

5)
#include <stdio.h>

int main() {
    int vet[50];
    int i;
    for(i=0;i<50;i++){
        vet[i]= (i+5*i)%(i+1);
        printf("%d\n", vet[i]);
    }
    return 0;
}

6)
#include <stdio.h>

int main()
{
  int vet[10];
  int i, j, primo;
  for (i = 0; i < 10; i++){
    printf("Digite o %do valor: ", i+1);
    scanf("%d", &vet[i]);
  }
  for (i = 0; i < 10; i++){
      primo = 1;
      for (j = 2; j < vet[i]; j++){
          if (vet[i] % j == 0){
          primo = 0;
          break;
        }
    }
    if (primo && vet[i]!=1 && vet[i]!=0){
      printf("O numero na posicao %d eh primo (%d)\n", i, vet[i]);
    }
  }
  return 0;
}

7)
#include<stdio.h>

int main()
{
    int vet[6], i, j, k, somap=0, somai=0;
    for(i=0;i<6;i++){
    printf("Digite o %do: ", (i+1));
    scanf("%d", &vet[i]);
    }
    for(i=0;i<6;i++){
        if(vet [i]%2 ==0){
           printf("%d eh par!\n", vet[i]);
           somap+=vet[i];
       }else if(vet[i]%2!=0){
           printf("%d eh impar!\n", vet[i]);
           somai+=vet[i];}
        }
    printf("A soma dos pares eh: %d\n", somap);
    printf("A soma dos impares eh: %d\n", somai);
  
    return 0;
}

8)
#include<stdio.h>

int main(){
	int vet[10];
	int i, j; 
	for(i=0;i<10;i++){
        printf("Digite o %do valor: ", i+1);
    	scanf("%d", &vet[i]);
    	for(j=0;j<i; j++){
    	    if(vet[i]==vet[j]){
    		    printf("---Numero invalido, digite um numero que nao seja repetido!---\n");
    		    i--;
    		    continue;
    	    }
    	 }
    }
    printf("Os valores sao: ");
    for(i=0;i<10;i++){
    	printf(i!=9 ? "%d, " : "%d." , vet[i]);
    }
    return 0;
}


Matrizes


1)
#include <stdio.h>

int main()
{
    float mat[4][4];
    int i, j, igual=0, mdez=0;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite o %do valor da linha %d: ", (j+1), (i+1));
            scanf("%f", &mat[i][j]);
            if(mat[i][j]>10){
                mdez++;
            }
        }
    }
    if(mdez==1){
        printf("Existe 1 valor maior que 10 \nO valor eh: ");
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                if(mat[i][j]>10){
                printf("%.2f", mat[i][j]);
                }
            }
        }
    }else if(mdez>1){
        printf("Existe %d valores maiores que 10! \n", mdez);
        printf("Os valores sao: ");
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                if(mat[i][j]>10){
                printf("%.2f, ", mat[i][j]);
                }
            }
        }
    }else{
        printf("Nao existe valor maior do que 10!");
    }
    return 0;
}

2)
#include <stdio.h>

int main()
{
    int mat[5][5];
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j){
                mat[i][j]=1;   
            }else{
                mat[i][j]=0;   
            }
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

3)
#include <stdio.h>

int main()
{
  int vet[4][4];
  int i, j, ma= 0, l=0, c=0;
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("Digite o valor da linha %d e da coluna %d: ", i+1, j+1);
      scanf("%d", &vet[i][j]);
      if (vet[i][j] > ma){
        ma = vet[i][j];
        l=i;
        c=j;}
    }
  }
  printf("O maior numero: %d\n", ma);
  printf("Na linha: %d\n", l);
  printf("Na coluna: %d\n", c);
  return 0;
}

4)
#include <stdio.h>

int main()
{
    int mat[5][5];
    int i, j, x, l=0, c=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite o %do valor da linha %d: ", (j+1), (i+1));
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite um valor: ");
    scanf("%d", &x);
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(x == mat[i][j]){
                l= i+1;
                c= j+1;
            }
        }
    }
    if(l && c){
        printf("O valor esta localizado na linha %d e coluna %d", l, c);
    }else{
        printf("Valor nao encontrado!");
    }
    return 0;
}

5)
#include <stdio.h>

int main()
{
    int mat[10][10];
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i<j){
                mat[i][j] = (2 * i) + (7 * j) - 2;
            }else if(i==j){
                mat[i][j] = (3 * (i*i)) - 1;
            }else if(i>j){
                mat[i][j] = (4 * (i*i*i)) - (5 * (j*j)) + 1;
            }
        }
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

6)
#include <stdio.h>

int main(){
    int mat[4][4];
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            mat[i][j] = 1+(rand() % 20);
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz triangular inferior\n\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i<j){
                mat[i][j]= 0;
            }
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

7)
#include <stdio.h>

int main()
{
  int vet[5][5];
  int i, j, k, val, exi;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      do{
        val = rand() % 100;     
        exi = 0;   
        for (int k = 0; k < j; k++){
          if (vet[i][k] == val){
            exi = 1;
            break;
          }
        }
        for (int k = 0; k < i; k++){
          if (vet[k][j] == val){
            exi = 1;
            break;
          }
        }
      }while (exi);
      vet[i][j] = val;
    }
  }
  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      printf("%d ", vet[i][j]);
    }
    printf("\n");
  }
  return 0;
}

8)
#include <stdio.h>

int main()
{
  int mat[2][2], matr[2][2];
  int op, constante, i, j;
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("Digite o %do valor da primeira matriz: ", i*2 + (j+1));
      scanf("%d", &mat[i][j]);
    }
  }
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("Digite o %do valor da segunda matriz: ", i * 2 + (j+1));
      scanf("%d", &matr[i][j]);
    }
  }
  printf("1 - Somar as duas matrizes\n");
  printf("2 - Subtrair a primeira matriz da segunda\n");
  printf("3 - Adicionar uma constante às duas matrizes\n");
  printf("4 - Imprimir as matrizes\n");
  printf("Digite a opção desejada: ");
  scanf("%d", &op);
  switch (op){
  case 1: for(i = 0; i < 2; i++){
             for (j = 0; j < 2; j++){
                  printf("%d ", mat[i][j] + matr[i][j]);
             }
             printf("\n");
          }break;
  case 2: for(i = 0;i < 2; i++){
             for(j = 0; j < 2; j++){
                 printf("%d ", mat[i][j] - matr[i][j]);
             }
             printf("\n");
          }break;
  case 3: printf("Digite a constante: ");
          scanf("%d", &constante);
          for(i = 0; i < 2; i++){
              for(j = 0; j < 2; j++){
                  printf("%d ", mat[i][j] + constante);
               }
               printf("\n");
          }
          for(i = 0; i < 2; i++){
              for(j = 0; j < 2; j++){
                   printf("%d ", matr[i][j] + constante);
              }
              printf("\n");
          }break;
  case 4: for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf("%d ", mat[i][j]);
            }
            printf("\n");
          }
         for(i = 0; i < 2; i++){
             for(j = 0; j < 2; j++){
                 printf("%d ", matr[i][j]);
             }
             printf("\n");
         }break;
  default: printf("Opção inválida!\n");break;}
  return 0;
}
