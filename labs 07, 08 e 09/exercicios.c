Lab07





1)
#include <stdio.h>

int main()
{
    char str[100];
    printf("Digite uma string para ser imprimida: ");
    fgets(str, 100, stdin);
    printf("\n%s", str);
    return 0;
}

2)
#include <stdio.h>
#include <string.h>

int main()
{
    int i, numDE1=0;
    char str[50] = "";
    printf("Digite um numero para conferir quantos 1 possui: ");
    fgets(str, 50, stdin);
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == '1'){
            numDE1++;
        }
    }
    if(numDE1 == 0){
        printf("Nao possui numero 1!");
    }else{
        printf("Possui o total de: %d", numDE1);
    }
    return 0;
}

3)
#include <stdio.h>

int main(){
  int i;
  char str[100];
  printf("Digite alguma frase para transcrever de tras para frente: ");
  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++){
  }
  printf("A frase transcrita eh: ");
  for (i--; i >= 0; i--){
    printf("%c", str[i]);
  }
 return 0;
}

4)
#include <stdio.h>

int main()
{
  char str[50], subs;
  int i, soma = 0;
  printf("Digite uma palavra: ");
  fgets(str, 50, stdin);
  for(i=0; i<str[i];i++){
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
          soma+=1;
      }
  }
  printf("A quantidade de vogais eh: %d\n", soma);
  printf("Digite uma vogal ou uma consoante para substituir as vogais: ");
  scanf("%c", &subs);
  for(i=0; i<str[i]; i++){
      switch(str[i]){
          case 'a': str[i]=subs;break;
          case 'e': str[i]=subs;break;
          case 'i': str[i]=subs;break; 
          case 'o': str[i]=subs;break;
          case 'u': str[i]=subs;break;
          case 'A': str[i]=subs;break;
          case 'E': str[i]=subs;break;
          case 'I': str[i]=subs;break; 
          case 'O': str[i]=subs;break;
          case 'U': str[i]=subs;break;
      }
  }
  printf("%s", str);
return 0;
}

OU

#include <stdio.h>

int main(){
  char str[100], subs;
  int i, count = 0;
  printf("Digite uma frase para contar quantas vogais possui: ");
  fgets(str, 100, stdin);
  printf("Digite uma vogal ou uma consoante para substituir as vogais: ");
  scanf("%c", &subs);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      str[i] = subs;
      count++;
    }
  }
  printf("A string tem %d vogais\n", count);
  printf("%s", str);
  return 0;
}

5)
#include <stdio.h>

int main(){
    int i;
    char str[100];
    printf("Digite uma frase para transformar a letras maiusculas em minusculas: ");
    fgets(str, 100, stdin);
    for(i=0; str[i] !='\0'; i++){
        if(str[i] >= 65 && str[i] <= 90){
            printf("%c", str[i] + 32);
        }else{
            printf("%c", str[i]);
        }
    }
    return 0;
}

6)
#include <stdio.h>

int main(){
    int i;
    char str[100];
    printf("Digite uma frase para transformar as letras minusculas em maiusculas: ");
    fgets(str, 100, stdin);
    for(i=0; str[i] !='\0'; i++){
        if(str[i] >= 97 && str[i] <= 122){
            printf("%c", str[i] - 32);
        }else{
            printf("%c", str[i]);
        }
    }
     return 0;
}

7)
#include <stdio.h>

int main()
{
    int i;
    char str[100];
    printf("Digite uma frase para tirar os espacos: ");
    fgets(str, 100, stdin);
    for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            printf("%c", str[i]);
        }
    }
    return 0;
}

8)
#include <stdio.h>

int main(){
  char str[100];
  char l1, l2;
  int i;
  printf("Digite uma frase: ");
  fgets(str, 100, stdin);
  printf("Digite qual letra voce quer substituir: ");
  scanf(" %c", &l1);
  printf("Voce quer substituir %c por qual letra? ", l1);
  scanf(" %c", &l2);
  for (i = 0; str[i] != '\0'; i++){
    if (str[i] == l1){
      str[i] = l2;
    }
  } 
  printf("%s", str);
  return 0;
}

9)
#include <stdio.h>

int main(){
    char mat[5][50];
    float con[5], mais_eco;
    int i, count=0;
    for(i=0; i<5; i++){
        printf("Digite o modelo do %do carro: ",i+1);
        fgets(mat[i], 50, stdin);
    }
    for(i=0; i<5; i++){
        printf("Digite o cosumo do(a) %s em km/l ", mat[i]);
        scanf("%f", &con[i]);
    }
    mais_eco = con[0];
    for(i=1; i<5; i++){
        if(mais_eco <= con[i]){
            mais_eco = con[i];
            count = i;
        }
    }
    printf("Entre os carros, o mais economico eh: %s", mat[count]);
    printf("Sera necessario %.2f litros de combustivel, para percorrer 1000 km.", 1000/mais_eco);
    return 0;
}

10)
#include <stdio.h>

int main()
{
    char mer[50];
    float price, des, vis;
    printf("Digite o nome da mercadoria: ");
    fgets(mer, 50, stdin);
    printf("Digite o preco da mercadoria: ");
    scanf(" %f", &price);
    des= price/10;
    vis = price - des;
    printf("Mercadoria: %s", mer);
    printf("Valor total: R$ %.2f \n", price);
    printf("Valor do desconto: R$ %.2f \n", des);
    printf("Valor a ser pago a vista: R$ %.2f", vis);
    return 0;
}

11)
#include <stdio.h>

int main()
{
    char str[50];
    int i, j;
    printf("Digite uma frase: ");
    fgets(str, 50, stdin);
    printf("Qual intervalo voce deseja? ");
    scanf(" %d %d", &i, &j);
    for (; i <= j; i++){
    printf("%c", str[i]);
    }
    return 0;
}

12)
#include <stdio.h>

int main()
{
  char str[100];
  int i;
  printf("Digite uma frase para codificar: ");
  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++){
    if (str[i] >= 'A' && str[i] <= 'Z'){
      str[i] = (str[i] - 'A' + 3) % 26 + 'A';
    }else if (str[i] >= 'a' && str[i] <= 'z'){
      str[i] = (str[i] - 'a' + 3) % 26 + 'a';
    }
  }
  printf("A frase codificada eh:\n%s", str);
  return 0;
}

13)
#include <stdio.h>
#include <string.h>

int main(){
    char pali[50];
    int i, tamanho, nEH;
    printf("Digite uma frase para conferir se ela eh palindromo: ");
    scanf("%s", pali);
    tamanho = strlen(pali);
    for(i=0; i < tamanho ;i++){
        if(pali[i] != pali[tamanho - i - 1]){
            nEH = 1;
            break;
           }
    }
    if (nEH == 1) {
        printf("Nao eh um palindromo");
    }else {
        printf("Eh um palindromo");
    }
    return 0;
}

14)
#include <stdio.h>
#include <string.h>

int main()
{
  char str1[50], str2[50], str3[50]="";
  int i, N;
  printf("Digite uma frase: ");
  fgets(str1, 50, stdin);
  printf("Digite outra frase: ");
  fgets(str2, 50, stdin);
  printf("Quantas letras voce quer concatenar da segunda frase na primeira frase? ");
  scanf("%d", &N);
  for(i=0; i<N; i++){
        str3[i] = str2[i];
    }
    strcat(str1, str3);
    fputs(str1, stdout);
  return 0;
}

15)
#include <stdio.h>
#include <string.h>

int main()
{
  char str1[20], str2[20], c1, c2, op, substring[20];
  int i, count = 0, pos, tamanho;
  do
  { 
    printf("       MENU      ");
    printf("\n(a) Ler uma string S1 (tamanho máximo 20 caracteres);\n");
    printf("(b) Imprimir o tamanho da string S1;\n");
    printf("(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;\n");
    printf("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;\n");
    printf("(e) Imprimir a string S1 de forma reversa;\n");
    printf("(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;\n");
    printf("(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;\n");
    printf("(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;\n");
    printf("(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring.\n");
    printf("(j) Sair.");
    printf("\nDigite a opção desejada:\n");
    scanf("%c", &op);
    getchar();

    switch(op){
    case 'a': printf("\nDigite a string S1:\n");
              fgets(str1, 20, stdin);
              str1[strlen(str1) - 1] = '\0';break;
    case 'b': printf("O tamanho da string S1 é %d\n", strlen(str1));break;
    case 'c': printf("\nDigite a string S2: ");
              fgets(str2, 20, stdin);
              printf(strcmp(str1, str2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");break;
    case 'd': printf("\nDigite a string S2: ");
              fgets(str2, 20, stdin);
              printf("O resultado da concatenação é \"%s\"\n", strcat(str1, str2));break;
    case 'e': for (i = strlen(str1) - 1; i >= 0; i--){
                  printf("%c", str1[i]);
              }
              printf("\n");break;
    case 'f': printf("\nDigite o caractere: ");
              scanf(" %c", &c1);
              for (i = 0; str1[i] != '\0'; i++){
                if (str1[i] == c1){
                      count++;
                }
              }
              printf("\nO caractere %c aparece %d vezes na string S1\n", c1, count);break;
    case 'g': printf("\nDigite o caractere C1: ");
              scanf(" %c", &c1);
              printf("\nDigite o caractere C2: ");
              scanf(" %c", &c2);
              for (i = 0; str1[i] != '\0'; i++){
                  if (str1[i] == c1){
                     str1[i] = c2;
                     break;
                  }
              }        
              printf("A string S1 eh %s\n", str1);break;
    case 'h': printf("\nDigite a string S2: ");
              fgets(str2, 20, stdin);
              if (strstr(str1, str2) != NULL){
                 printf("A string S2 é substring de S1\n");
              }else{
                 printf("A string S2 não é substring de S1\n");
              }break;
    case 'i': printf("\nDigite a posição: ");
              scanf("%d", &pos);
              printf("\nDigite o tamanho: ");
              scanf("%d", &tamanho);
              for (i = pos; i <= tamanho; i++){
              substring[i] = str1[pos + i];
              }
              substring[i + 1] = '\0';
              printf("A substring é %s\n", substring);break;
    case 'j': printf("Saindo...");break;          
    default: printf("Opcao invalida digite novamente.\n");break;
    }
  } while (op != 'j');
  return 0;
}

16)
#include <stdio.h>

int main()
{
    int val, resul, i, tempVal = 0;
    int num[1000] = {7, 3, 1, 6, 7, 1, 7, 6, 5, 3, 1, 3, 3, 0, 6, 2, 4, 9, 1, 9, 2, 2, 5, 1, 1, 9, 6, 7, 4, 4, 2, 6, 5, 7, 4, 7, 4, 2, 3, 5, 5, 3, 4, 9, 1, 9, 4, 9, 3, 4, 9, 6, 9, 8, 3, 5, 2, 0, 3, 1, 2, 7, 7, 4, 5, 0, 6, 3, 2, 6, 2, 3, 9, 5, 7, 8, 3, 1, 8, 0, 1, 6, 9, 8, 4, 8, 0, 1, 8, 6, 9, 4, 7, 8, 8, 5, 1, 8, 4, 3, 8, 5, 8, 6, 1, 5, 6, 0, 7, 8, 9, 1, 1, 2, 9, 4, 9, 4, 9, 5, 4, 5, 9, 5, 0, 1, 7, 3, 7, 9, 5, 8, 3, 3, 1, 9, 5, 2, 8, 5, 3, 2, 0, 8, 8, 0, 5, 5, 1, 1, 1, 2, 5, 4, 0, 6, 9, 8, 7, 4, 7, 1, 5, 8, 5, 2, 3, 8, 6, 3, 0, 5, 0, 7, 1, 5, 6, 9, 3, 2, 9, 0, 9, 6, 3, 2, 9, 5, 2, 2, 7, 4, 4, 3, 0, 4, 3, 5, 5, 7, 6, 6, 8, 9, 6, 6, 4, 8, 9, 5, 0, 4, 4, 5, 2, 4, 4, 5, 2, 3, 1, 6, 1, 7, 3, 1, 8, 5, 6, 4, 0, 3, 0, 9, 8, 7, 1, 1, 1, 2, 1, 7, 2, 2, 3, 8, 3, 1, 1, 3, 6, 2, 2, 2, 9, 8, 9, 3, 4, 2, 3, 3, 8, 0, 3, 0, 8, 1, 3, 5, 3, 3, 6, 2, 7, 6, 6, 1, 4, 2, 8, 2, 8, 0, 6, 4, 4, 4, 4, 8, 6, 6, 4, 5, 2, 3, 8, 7, 4, 9, 3, 0, 3, 5, 8, 9, 0, 7, 2, 9, 6, 2, 9, 0, 4, 9, 1, 5, 6, 0, 4, 4, 0, 7, 7, 2, 3, 9, 0, 7, 1, 3, 8, 1, 0, 5, 1, 5, 8, 5, 9, 3, 0, 7, 9, 6, 0, 8, 6, 6, 7, 0, 1, 7, 2, 4, 2, 7, 1, 2, 1, 8, 8, 3, 9, 9, 8, 7, 9, 7, 9, 0, 8, 7, 9, 2, 2, 7, 4, 9, 2, 1, 9, 0, 1, 6, 9, 9, 7, 2, 0, 8, 8, 8, 0, 9, 3, 7, 7, 6, 6, 5, 7, 2, 7, 3, 3, 3, 0, 0, 1, 0, 5, 3, 3, 6, 7, 8, 8, 1, 2, 2, 0, 2, 3, 5, 4, 2, 1, 8, 0, 9, 7, 5, 1, 2, 5, 4, 5, 4, 0, 5, 9, 4, 7, 5, 2, 2, 4, 3, 5, 2, 5, 8, 4, 9, 0, 7, 7, 1, 1, 6, 7, 0, 5, 5, 6, 0, 1, 3, 6, 0, 4, 8, 3, 9, 5, 8, 6, 4, 4, 6, 7, 0, 6, 3, 2, 4, 4, 1, 5, 7, 2, 2, 1, 5, 5, 3, 9, 7, 5, 3, 6, 9, 7, 8, 1, 7, 9, 7, 7, 8, 4, 6, 1, 7, 4, 0, 6, 4, 9, 5, 5, 1, 4, 9, 2, 9, 0, 8, 6, 2, 5, 6, 9, 3, 2, 1, 9, 7, 8, 4, 6, 8, 6, 2, 2, 4, 8, 2, 8, 3, 9, 7, 2, 2, 4, 1, 3, 7, 5, 6, 5, 7, 0, 5, 6, 0, 5, 7, 4, 9, 0, 2, 6, 1, 4, 0, 7, 9, 7, 2, 9, 6, 8, 6, 5, 2, 4, 1, 4, 5, 3, 5, 1, 0, 0, 4, 7, 4, 8, 2, 1, 6, 6, 3, 7, 0, 4, 8, 4, 4, 0, 3, 1, 9, 9, 8, 9, 0, 0, 0, 8, 8, 9, 5, 2, 4, 3, 4, 5, 0, 6, 5, 8, 5, 4, 1, 2, 2, 7, 5, 8, 8, 6, 6, 6, 8, 8, 1, 1, 6, 4, 2, 7, 1, 7, 1, 4, 7, 9, 9, 2, 4, 4, 4, 2, 9, 2, 8, 2, 3, 0, 8, 6, 3, 4, 6, 5, 6, 7, 4, 8, 1, 3, 9, 1, 9, 1, 2, 3, 1, 6, 2, 8, 2, 4, 5, 8, 6, 1, 7, 8, 6, 6, 4, 5, 8, 3, 5, 9, 1, 2, 4, 5, 6, 6, 5, 2, 9, 4, 7, 6, 5, 4, 5, 6, 8, 2, 8, 4, 8, 9, 1, 2, 8, 8, 3, 1, 4, 2, 6, 0, 7, 6, 9, 0, 0, 4, 2, 2, 4, 2, 1, 9, 0, 2, 2, 6, 7, 1, 0, 5, 5, 6, 2, 6, 3, 2, 1, 1, 1, 1, 1, 0, 9, 3, 7, 0, 5, 4, 4, 2, 1, 7, 5, 0, 6, 9, 4, 1, 6, 5, 8, 9, 6, 0, 4, 0, 8, 0, 7, 1, 9, 8, 4, 0, 3, 8, 5, 0, 9, 6, 2, 4, 5, 5, 4, 4, 4, 3, 6, 2, 9, 8, 1, 2, 3, 0, 9, 8, 7, 8, 7, 9, 9, 2, 7, 2, 4, 4, 2, 8, 4, 9, 0, 9, 1, 8, 8, 8, 4, 5, 8, 0, 1, 5, 6, 1, 6, 6, 0, 9, 7, 9, 1, 9, 1, 3, 3, 8, 7, 5, 4, 9, 9, 2, 0, 0, 5, 2, 4, 0, 6, 3, 6, 8, 9, 9, 1, 2, 5, 6, 0, 7, 1, 7, 6, 0, 6, 0, 5, 8, 8, 6, 1, 1, 6, 4, 6, 7, 1, 0, 9, 4, 0, 5, 0, 7, 7, 5, 4, 1, 0, 0, 2, 2, 5, 6, 9, 8, 3, 1, 5, 5, 2, 0, 0, 0, 5, 5, 9, 3, 5, 7, 2, 9, 7, 2, 5, 7, 1, 6, 3, 6, 2, 6, 9, 5, 6, 1, 8, 8, 2, 6, 7, 0, 4, 2, 8, 2, 5, 2, 4, 8, 3, 6, 0, 0, 8, 2, 3, 2, 5, 7, 5, 3, 0};
    int count = 987;
    for (i = 0; i < count; i++){
        val = num[i] * num[i + 1] * num[i + 2] * num[i + 3] * num[i + 4];
        if (tempVal < val)
        {
            tempVal = val;
            resul = i;
        }
    }
    printf("O maior produto em um conjunto de 5 dígitos consecutivos eh %d, %d, %d, %d, %d e o resultado eh %d", num[resul], num[resul + 1], num[resul + 2], num[resul + 3], num[resul + 4], tempVal);
    return 0;
}











Lab08












1)
#include <stdio.h>

struct Horario {
    int hora, minuto, segundo;
};

struct Data {
    int dia, mes, ano;
};

struct Compromisso {
    struct Data d;
    struct Horario h;
    char texto[100];
};

2)
#include <stdio.h>

struct pessoa{
  char nome[50];
  int idade;
  char endereco[50];
};
int main(){
  struct pessoa p;
  printf("Digite o nome da pessoa: ");
  scanf("%s", p.nome);
  printf("Digite a idade da pessoa: ");
  scanf("%d", &p.idade);
  printf("Digite o endereço da pessoa: ");
  scanf("%s", p.endereco);
  printf("Nome: %s\nEndereco: %s\nIdade: %d\n", p.nome, p.endereco, p.idade);
  return 0;
}

3)
#include <stdio.h>

struct aluno{
  char nome[50];
  char matricula[50];
  char curso[50];
};

int main(){
    struct aluno a[5];
    int i;
    for(i=0; i<5; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        fgets(a[i].nome, 50, stdin);
        printf("Digite a matricula do aluno %d: ", i+1);
        fgets(a[i].matricula, 50, stdin);
        printf("Digite o curso do aluno %d: ", i+1);
        fgets(a[i].curso, 50, stdin);
    }
    for(i=0; i<5; i++){
        printf("\nAluno %d: ", i+1);
        printf("\n\tnome: %s", a[i].nome);
        printf("\tmatricula: %s", a[i].matricula);
        printf("\tcurso: %s", a[i].curso); 
    }
    return 0;
}

4)
#include <stdio.h>

struct aluno{
  char nome[100];
  int matri;
  float n1;
  float n2;
  float n3;
};

int main(){
  struct aluno a[5];
  int i, inMaiorN1 = 0, inMaiorM = 0, inMenorM = 0;
  float M, maiorN1 = 0, maiorM = 0, menorM = 10;
  for (i = 0; i < 5; i++){
    printf("Digite o nome do aluno %d: ", i+1);
    scanf(" %s", a[i].nome);
    printf("Digite a matrícula do aluno %d: ", i+1);
    scanf(" %d", &a[i].matri);
    printf("Digite a primeira nota do aluno %d: ", i+1);
    scanf(" %f", &a[i].n1);
    printf("Digite a segunda nota do aluno %d: ", i+1);
    scanf(" %f", &a[i].n2);
    printf("Digite a terceira nota do aluno %d: ", i+1);
    scanf(" %f", &a[i].n3);
    printf("\n");
  }
  for (int i = 0; i < 5; i++){
    M = (a[i].n1 + a[i].n2 + a[i].n3)/3;
    if (a[i].n1 > maiorN1){
      maiorN1 = a[i].n1;
      inMaiorN1 = i;
    }
    if (M > maiorM){
      maiorM = M;
      inMaiorM = i;
    }
    if (M < menorM){
      menorM = M;
      inMenorM = i;
    }
  }
  printf("Aluno com maior nota da primeira prova: %s\n", a[inMaiorN1].nome);
  printf("Aluno com maior media geral: %s\n", a[inMaiorM].nome);
  printf("Aluno com menor media geral: %s\n", a[inMenorM].nome);
  for (int i = 0; i < 5; i++){
    M = (a[i].n1 + a[i].n2 + a[i].n3)/3;
    if (M >= 6){
      printf("O aluno: %s, foi aprovado com media: %.2f\n", a[i].nome, M);
    }else{
      printf("O aluno: %s, foi reprovado com media: %.2f\n", a[i].nome, M);
    }
  }
  return 0;
}

5)
#include <stdio.h>

struct vetor{
    float x;
    float y;
    float z;  
};

struct vetor2{
    float x;
    float y;
    float z; 
};

int main(){
    struct vetor v1;
    struct vetor2 v2;
    printf("Digite as coordenadas do primeiro vetor: ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    printf("Digite as coordenadas do segundo vetor: ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);
    printf("A soma dos vetores eh: (%.2f, %.2f, %.2f)", v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
    return 0;
}

6)
#include <stdio.h>

struct funcionario{
  char nome[50];
  char cargo[30];
  char cpf[12];
  char sexo;
  float sal;
  int idade;
  int setor;
  int dia;
  int mes;
  int ano;
};

int main(){
  struct funcionario f;
  printf("Digite o nome do funcionario:\n");
  fgets(f.nome, 50, stdin);
  setbuf(stdin, NULL);
  
  printf("Digite a idade do funcionario:\n");
  scanf("%d", &f.idade);
  printf("Digite o sexo do funcionario (M/F):\n");
  scanf(" %c", &f.sexo);
  setbuf(stdin, NULL);
  printf("Digite o CPF do funcionario: ");
  fgets(f.cpf, 12, stdin);
  setbuf(stdin, NULL); 
  
  printf("\nDigite o dia de nascimento do funcionario:\n");
  scanf("%d", &f.dia);
  printf("Digite o mês de nascimento do funcionario:\n");
  scanf("%d", &f.mes);
  printf("Digite o ano de nascimento do funcionario:\n");
  scanf("%d", &f.ano);
  printf("Digite o código do setor do funcionario:\n");
  scanf("%d", &f.setor);
  printf("Digite o cargo do funcionario:\n");
  fgets(f.cargo, 30, stdin);
  setbuf(stdin, NULL);  
  
  printf("Digite o salário do funcionario:\n");
  scanf("%f", &f.sal);
  printf("\n\n\n");

  printf("Nome: %s\n", f.nome);
  printf("Idade: %d\n", f.idade);
  printf("Sexo: %c\n", f.sexo);
  printf("CPF: %s\n", f.cpf);
  printf("Data de nascimento: %d/%d/%d\n", f.dia, f.mes, f.ano);
  printf("Código do setor: %d\n", f.setor);
  printf("Cargo: %s\n", f.cargo);
  printf("Salário: %.2f\n", f.sal);
  return 0;
}

7)
#include <stdio.h>
#include <string.h>


struct pessoa{
    char nome[50];
    char ende[70];
    char tel[20];
};

int main(){
    struct pessoa p[5];
    int i, j, k, auxiliar;
    int ordem[5];
    for(i=0; i<5; i++){
        printf("Digite o nome do %d: ", i+1);
        fgets(p[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite o endereco: ");
        fgets(p[i].ende, 70, stdin);
        setbuf(stdin, NULL);
        printf("Digite o telefone (com o DDD): ");
        fgets(p[i].tel, 20, stdin);
    }
    for (i = 0; i < 5; i++){
    ordem[i] = i;
    }
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (strcmp(p[ordem[i]].nome, p[ordem[j]].nome) < 0){
                auxiliar = ordem[i];
                ordem[i] = ordem[j];
                ordem[j] = auxiliar;
            }
        }   
    }
    printf("\nCADASTROS:\n");
    for (i = 0; i < 5; i++){
    printf("Nome: %s\n", p[ordem[i]].nome);
    printf("Endereço: %s\n", p[ordem[i]].ende);
    printf("Telefone: %s\n", p[ordem[i]].tel);
    printf("\n");
    }
  return 0;
}

8)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct cartas{
  char naipe[10];
  char val[1];
};

int main()
{
  srand(time(NULL));
  char *vals[13] = {"A", "2", "3", "4", "5", "6", "7", "Q", "J", "K"};
  char *naipes[4] = {"Paus", "Copas", "Espadas", "Ouros"};
  int i, j;
  int numPlayers = 2, numCar = 3;
  for (j = 1; j <= numPlayers; j++){
    printf("Jogador %d:\n", j);
    for (int i = 1; i <= numCar; i++){
      printf("Carta %d: %s de %s\n", i, vals[rand() % 10], naipes[rand() % 4]);
    }
    printf("\n");
  }
  return 0;
}

9)
#include <stdio.h>

struct carro{
  char marca[15];
  int ano;
  float preco;
};

int main()
{
  struct carro c[5];
  int i;
  float p=1;
  for (i = 0; i < 5; i++)
  {
    printf("Digite a marca do carro %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(c[i].marca, 15, stdin);
    printf("Digite o ano do carro %d: ", i+1);
    scanf("%d", &c[i].ano);
    printf("Digite o preço do carro %d: ", i+1);
    scanf("%f", &c[i].preco);
    printf("\n");
  }
  printf("Digite um valor para comparar os precos: ");
  scanf("%f", &p);
  while (p != 0){
    for (i = 0; i < 5; i++){
      if (c[i].preco < p){
        printf("Marca: %s\nAno: %d\nPreço: %.2f\n\n", c[i].marca, c[i].ano, c[i].preco);
      }
    }
    printf("Digite outro valor para comparar os precos: ");
    scanf("%f", &p);
  }
  return 0;
}

10)
#include <stdio.h>
#include <string.h>

struct Livro{
  char titulo[30];
  char autor[15];
  int ano;
};

int main(){
  struct Livro l[5];
  int i;
  char titu[30];
  for (i = 0; i < 5; i++){
    printf("Digite o titulo do livro %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(l[i].titulo, 30, stdin);    
    printf("Digite o autor do livro %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(l[i].autor, 15, stdin);    
    printf("Digite o ano do livro %d: ", i+1);
    scanf("%d", &l[i].ano);
    printf("\n");
  }
  printf("Digite o titulo do livro que deseja buscar: ");
  scanf("%s", titu);
  for (i = 0; i < 5; i++){
    if (strcmp(l[i].titulo, titu) == 0){
      printf("Titulo: %s\nAutor: %s\nAno: %d\n\n", l[i].titulo, l[i].autor, l[i].ano);
    }
  }
  return 0;
}

11)
#include <stdio.h>

struct data{
  int dia;
  int mes;
  int ano;
};

struct compromisso{
  char comp[60];
  struct data d;
};

int main()
{
  struct compromisso c[5];
  int i, m, a;
  for (i = 0; i < 5; i++)
  {
    printf("Digite o compromisso %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(c[i].comp, 60, stdin);    
    printf("Digite o dia do compromisso %d: ", i+1);
    scanf("%d", &c[i].d.dia);
    printf("Digite o mês do compromisso %d: ", i+1);
    scanf("%d", &c[i].d.mes);
    printf("Digite o ano do compromisso %d: ", i+1);
    scanf("%d", &c[i].d.ano);
    printf("\n");
  }
  printf("Digite um mês: ");
  scanf("%d", &m);
  printf("Digite um ano: ");
  scanf("%d", &a);
  while (m != 0){
    for (i = 0; i < 5; i++){
      if (c[i].d.mes == m && c[i].d.ano == a){
        printf("Compromisso: %s\nDia: %d\nMês: %d\nAno: %d\n\n", c[i].comp, c[i].d.dia, c[i].d.mes, c[i].d.ano);
      }
    }
    printf("Digite um mês: ");
    scanf("%d", &m);
    printf("Digite um ano: ");
    scanf("%d", &a);
  }
  return 0;
}

12)
#include <stdio.h>

struct eletrodomestico{
  char nome[15];
  float potencia;
  float ligado;
};

int main()
{
  struct eletrodomestico e[5];
  int i, t;
  float consumo = 0;
  for (i = 0; i < 5; i++){
    printf("Digite o nome do eletrodomestico %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(e[i].nome, 15, stdin);    
    printf("Digite a potencia do eletrodomestico %d: ", i+1);
    scanf("%f", &e[i].potencia);
    printf("Digite o tempo ativo do eletrodomestico %d: ", i+1);
    scanf("%f", &e[i].ligado);
    printf("\n");
  }
  printf("Digite quantos dias os eletrodomesticos ficam ligados: ");
  scanf("%d", &t);
  for (i = 0; i < 5; i++){
    consumo += e[i].potencia * e[i].ligado * t;
  }
  printf("Consumo total dos eletrodomesticos em %d dias eh: %.2f\n", t, consumo);
  for (i = 0; i < 5; i++)
  {
    printf("Consumo relativo do eletrodoméstico %d: %.2f%%\n", i + 1, (e[i].potencia * e[i].ligado * t) / consumo * 100);
  }

  return 0;
}

13)
#include <stdio.h>

struct produto{
  char nome[15];
  float preco;
  int quantidade;
  int codigo;
};

int main()
{
  struct produto p[5];
  int i, c, q;
  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome do produto %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(p[i].nome, 15, stdin);    
    printf("Digite o preco do produto %d: ", i+1);
    scanf("%f", &p[i].preco);
    printf("Digite a quantidade do produto %d: ", i+1);
    scanf("%d", &p[i].quantidade);
    printf("Digite o codigo do produto %d: ", i+1);
    scanf("%d", &p[i].codigo);
    printf("\n");
  }
  printf("Digite o codigo do produto desejado: ");
  scanf("%d", &c);
  while (c != 0){
    printf("Digite a quantidade do produto desejado: ");
    scanf("%d", &q);
    for (int i = 0; i < 5; i++){
      if (p[i].codigo == c){
        if (p[i].quantidade >= q){
          p[i].quantidade -= q;
          printf("Compra bem sucedida!\n");
        }else{
          printf("Nao foi possivel realizar o pedido.\n\n");
        }
      }else{
          printf("Codigo invalido!(Digite 0 para sair)");
      }
    }
    printf("Digite o codigo do produto desejado: ");
    scanf("%d", &c);
  }
  return 0;
}

14)
#include <stdio.h>

struct aeroporto{
  int codigo;
  int vooS;
  int vooC;
};

struct voo{
  int codOri;
  int codDes;
};

int main()
{
  struct voo v[5];
  struct aeroporto a[5];
  int i, j;
  for (i = 0; i < 5; i++){
    printf("Digite o codigo do aeroporto de origem do voo %d: ", i+1);
    scanf("%d", &v[i].codOri);
    printf("Digite o codigo do aeroporto de destino do voo %d: ", i+1);
    scanf("%d", &v[i].codDes);
    printf("\n");
  }
  for (i = 0; i < 5; i++){
    printf("Digite o codigo do aeroporto %d: ", i+1);
    scanf("%d", &a[i].codigo);
    a[i].vooS = 0;
    a[i].vooC = 0;
    printf("\n");
  }
  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++)
    {
      if (v[i].codOri == a[j].codigo){
        a[j].vooS++;
      }
      if (v[i].codDes == a[j].codigo){
        a[j].vooC++;
      }
    }
  }
  for (i = 0; i < 5; i++){
    printf("\nAeroporto %d: %d voos saindo e %d voos chegando\n", a[i].codigo, a[i].vooS, a[i].vooC);
  }
  return 0;
}

15)
#include <stdio.h>
#include <string.h>

struct ingrediente{
    char nome[25];
    float quantidade;
};

struct receita{
    char nome[25];
    int quanIngr;
    struct ingrediente i[10];    
};

int main(){
    struct receita r[5];
    char Found[25];
    int i, j, found;
   
    for(i = 0; i < 5; i++){
        printf("Receita %d\n", i+1);
        printf("\nnome: ");
        fgets(r[i].nome, 25, stdin);
        setbuf(stdin, NULL);
        printf("\nquantidade de ingredientes: ");
        scanf("%d", &r[i].quanIngr);
        setbuf(stdin, NULL);
        for(j = 0; j < r[i].quanIngr; j++){
            printf("\nDigite o ingrediente %d: ", j+1);
            fgets(r[i].i[j].nome, 25, stdin);
            setbuf(stdin, NULL);
            printf("\nQual eh a quantidade desse ingrediente: ");
            scanf("%f", &r[i].i[j].quantidade);
            setbuf(stdin, NULL);
        }
    }
    for( ; strcmp(Found, "") != 10 ; ){
        found = 0;
        printf("\nDigite uma receita: ");
        fgets(Found, 25, stdin);
        setbuf(stdin, NULL);
        for(i = 0; i < 5; i++){
            if(strcmp(Found, r[i].nome) == 0){
                printf("Receita: %s", r[i].nome);
                printf("\n%d ingredientes: \n", r[i].quanIngr);
                for(j=0; j<r[i].i[j].quantidade ; j++){
                    printf("\n%.0f %s", r[i].i[j].quantidade, r[i].i[j].nome);
                }
                found++;
            }
        }
        if(found == 0){
            printf("Nao foi possivel achar a receita.\n");
        }    
    }
    printf("Encerrando...");
}


16)
#include <stdio.h>
#include <string.h>

struct filme{
    char nome[25];
    char ano[5];
    char dura[10];
};

struct diretor{
    char nome[20];
    int quanF;
    struct filme f[10];    
};

int main(){
    struct diretor d[5];
    int i, j, found;
    char Found[20];
    for(i = 0; i < 5; i++){
        printf("Diretor %d\n", i+1);
        printf("\nnome: ");
        fgets(d[i].nome, 20, stdin);
        setbuf(stdin, NULL);
        printf("\nquantidade de filmes: ");
        scanf("%d", &d[i].quanF);
        setbuf(stdin, NULL);
        for(j = 0; j < d[i].quanF; j++){
            printf("\nNome filme %d: ", j+1);
            fgets(d[i].f[j].nome, 25, stdin);
            setbuf(stdin, NULL);
            printf("\nAno filme %d: ", j+1);
            fgets(d[i].f[j].ano, 5, stdin);
            setbuf(stdin, NULL);
            printf("\nDuracao filme %d: ", j+1);
            fgets(d[i].f[j].dura, 10, stdin);
            setbuf(stdin, NULL);
        }
    }
    for( ; strcmp(Found, "") != 10 ; ){
        found = 0;
        printf("\nDigite o nome de um diretor: ");
        fgets(Found, 20, stdin);
        setbuf(stdin, NULL);
        for(i = 0; i < 5; i++){
            if(strcmp(Found, d[i].nome) == 0){
                printf("Diretor: %s", d[i].nome);
                printf("\n%d filmes: \n", d[i].quanF);
                for(j = 0; j < d[i].quanF ; j++){
                    printf("\nnome: %s", d[i].f[j].nome);
                    printf("\nano: %s", d[i].f[j].ano);
                    printf("\nduracao: %s", d[i].f[j].dura);
                }
                found++;
            }
        }
        if(found == 0){
            printf("Nao foi possivel achar o cadastro do diretor.\n");
        }    
    }
    printf("Encerrando...");
    return 0;
}

17)
#include <stdio.h>
#include <string.h>

struct Endereco{
  char rua[50];
  char bairro[50];
  char cidade[50];
  char estado[50];
  char cep[50];
};

struct Cadastro{
  struct Endereco e;
  char nome[50];
  char id[50];
  char cpf[50];
  char estadoCivil[50];
  char tel[50];
  char sexo[50];
  float sal;
  int idade;
};



int main()
{
  struct Cadastro c[5];
  char identidade[50];
  int i, mIdade = 0, countmIdade = 0;
  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome do cadastro %d: ", i + 1);
    scanf("%s", c[i].nome);
    printf("Digite a rua do cadastro %d: ", i + 1);
    scanf("%s", c[i].e.rua);
    printf("Digite o bairro do cadastro %d: ", i + 1);
    scanf("%s", c[i].e.bairro);
    printf("Digite a cidade do cadastro %d: ", i + 1);
    scanf("%s", c[i].e.cidade);
    printf("Digite o estado do cadastro %d: ", i + 1);
    scanf("%s", c[i].e.estado);
    printf("Digite o cep do cadastro %d: ", i + 1);
    scanf("%s", c[i].e.cep);
    printf("Digite o salario do cadastro %d: ", i + 1);
    scanf("%f", &c[i].sal);
    printf("Digite a identidade do cadastro %d: ", i + 1);
    scanf("%s", c[i].id);
    printf("Digite o cpf do cadastro %d: ", i + 1);
    scanf("%s", c[i].cpf);
    printf("Digite o estado civil do cadastro %d: ", i + 1);
    scanf("%s", c[i].estadoCivil);
    printf("Digite o telefone do cadastro %d: ", i + 1);
    scanf("%s", c[i].tel);
    printf("Digite a idade do cadastro %d: ", i + 1);
    scanf("%d", &c[i].idade);
    printf("Digite o sexo do cadastro %d: ", i + 1);
    scanf("%s", c[i].sexo);
    printf("\n");
  }
  for (i = 0; i < 5; i++)
  {
    if (c[i].idade > mIdade)
    {
      mIdade = c[i].idade;
      countmIdade = i;
    }
  }
  printf("Pessoa com maior idade: %s\n", c[countmIdade].nome);

  printf("Pessoas do sexo masculino: ");
  for (i = 0; i < 5; i++){
    if (c[i].sexo[0] == 'm')
    {
      printf("%s ", c[i].nome);
    }
  }
  printf("\nPessoas com salario maior que 1000: ");
  for (i = 0; i < 5; i++){
    if (c[i].sal > 1000){
      printf("%s ", c[i].nome);
    }
  }
  printf("\nDigite a identidade da pessoa desejada: ");
  setbuf(stdin, NULL);
  fgets(identidade, 50, stdin);
  for (i = 0; i < 5; i++){
    if (strcmp(c[i].id, identidade) == 0){
      printf("Nome: %s", c[i].nome);
      printf("Rua: %s", c[i].e.rua);
      printf("Bairro: %s", c[i].e.bairro);
      printf("Cidade: %s", c[i].e.cidade);
      printf("Estado: %s", c[i].e.estado);
      printf("Cep: %s", c[i].e.cep);
      printf("Salario: %f", c[i].sal);
      printf("Identidade: %s", c[i].id);
      printf("Cpf: %s", c[i].cpf);
      printf("Estado civil: %s", c[i].estadoCivil);
      printf("Telefone: %s", c[i].tel);
      printf("Idade: %d", c[i].idade);
      printf("Sexo: %s", c[i].sexo);
    }
  }
  return 0;
}

18)
#include <stdio.h>

int verificacao(int d, int m, int a){
    int valido=0;
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        if(d<=31){
            valido=1;
        }
    }else if(m==4 || m==6 || m==9 || m==11){
        if(d<=30){
            valido=1;
        }
    }else if(m==2){
        if((a%4==0 && a%100!=0) || (a%400==0)){
            if(d<=29){
                valido=1;
            }else if(d<=28){
                valido=1;
            }
        }
    }
    return valido;
}

struct data{
  int dia;
  int mes;
  int ano;
};

int main()
{
  int verificacao(int d, int m, int a);
  int dia1, dia2, dias;
  struct data d1, d2;
  printf("Digite a primeira data (dd/mm/aaaa):\n");
  scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
  if(verificacao(d1.dia, d1.mes, d1.ano)!=1){
      printf("Data invalida!");
      return 0;
  }
  printf("Digite a segunda data (dd/mm/aaaa):\n");
  scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);
  if(verificacao(d2.dia, d2.mes, d2.ano)!=1){
      printf("Data invalida!");
      return 0;
  }
  dia1 = d1.dia + (d1.mes * 30) + (d1.ano * 365);
  dia2 = d2.dia + (d2.mes * 30) + (d2.ano * 365);
  dias = dia2 - dia1;
  printf("Dias decorridos: %d\n", dias < 0 ? dias * -1 : dias);
  return 0;
}









Lab09












1)
#include <stdio.h>

int main()
{
  int a = 2, *pa;
  float b = 5.4, *pb;
  char c = 'c', *pc;
  pa = &a;
  pb = &b;
  pc = &c;
  printf("a = %d, b = %.2f, c = %c\n", a, b, c);
  *pa = 3;
  *pb = 7.5;
  *pc = 'g';
  printf("a = %d, b = %.2f, c = %c\n", a, b, c);
  return 0;
}

2)
