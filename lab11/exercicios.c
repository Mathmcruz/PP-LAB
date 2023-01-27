5)
#include <stdio.h>

int main()
{
  char nome[50];
  char c;
  printf("Digite o nome do arquivo: ");
  scanf("%s", nome);
  printf("Digite o caractere: ");
  scanf(" %c", &c);
  FILE *f = fopen(nome, "r");
  if (f == NULL)
  {
    printf("Erro: falha abrir o arquivo %s!", nome);
    return 1;
  }
  int count = 0;
  char ch;
  while ((ch = fgetc(f)) != EOF)
  {
    if (ch == c)
    {
      count++;
    }
  }
  printf("O caractere %c ocorre %d vezes no arquivo %s", c, count, nome);
  fclose(f);
  return 0;
}

10)
#include <stdio.h>
#include <string.h>

int main()
{
  char nome[50];
  printf("Digite o nome do arquivo de entrada: ");
  scanf("%s", nome);
  FILE *f = fopen(nome, "r");
  if (f == NULL)
  {
    printf("Erro ao abrir o arquivo %s", nome);
    return 1;
  }
  char cidade[40];
  int hab;
  char mais_hab[40];
  int cidade_mais_populosa = 0;
  while (fscanf(f, "%s %d", cidade, &hab) != EOF)
  {
    if (hab > cidade_mais_populosa)
    {
      cidade_mais_populosa = hab;
      strcpy(mais_hab, cidade);
    }
  }
  fclose(f);
  printf("Digite o nome do arquivo de saida: ");
  scanf("%s", nome);
  f = fopen(nome, "w");
  if (f == NULL)
  {
    printf("Erro: falha ao abrir o arquivo! %s", nome);
    return 1;
  }
  fprintf(f, "%s %d", mais_hab, cidade_mais_populosa);
  fclose(f);
  return 0;
}

15)
#include <stdio.h>

int main()
{
  int ano;
  char nome[50];
  printf("Digite o ano corrente: ");
  scanf("%d", &ano);
  printf("Difite o nome do arquivo de entrada: ");
  scanf("%s", nome);
  FILE *f = fopen(nome, "r");
  if (f == NULL)
  {
    printf("Erro: falha ao abrir o arquivo! %s", nome);
    return 1;
  }
  printf("Digite o nome do arquivo de saida: ");
  scanf("%s", nome);
  FILE *f2 = fopen(nome, "w");
  if (f2 == NULL)
  {
    printf("Erro: falha ao abrir o arquivo! %s", nome);
    return 1;
  }
  char pessoa[40];
  int niver;
  while (fscanf(f, "%s %d", pessoa, &niver) != EOF)
  {
    int idade = idade - niver;
    if (idade < 18)
    {
      fprintf(f2, "%s menor de idade!\n", pessoa);
    }
    else if (idade > 18)
    {
      fprintf(f2, "%s maior de idade!\n", pessoa);
    }
    else
    {
      fprintf(f2, "%s entrando na maioridade!\n", pessoa);
    }
  }
  fclose(f);
  fclose(f2);
  return 0;
}

20)
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i;
  char *p, *p2;
  FILE *f;
  printf("Digite o número de alunos: ");
  scanf("%d", &n);
  p = (char *)malloc(n * 40 * sizeof(char));
  p2 = (char *)malloc(n * sizeof(char));
  f = fopen("alunos.txt", "w");
  for (i = 0; i < n; i++){
    printf("Digite o nome do aluno: ");
    scanf("%s", &p[i * 40]);
    printf("Digite a nota do aluno: ");
    scanf("%s", &p2[i]);
  }
  for (i = 0; i < n; i++){
    fprintf(f, "%s %s\n", &p[i * 40], &p2[i]);
  }
  free(p);
  free(p2);
  fclose(f);
  return 0;
}

25)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contato
{
  char nome[100];
  char telefone[100];
  int dia;
  int mes;
};

struct contato *contatos = NULL;
int contatos_count = 0;

void adicionar_contato()
{
  contatos_count++;
  contatos = realloc(contatos, contatos_count * sizeof(struct contato));
  printf("Digite o nome do contato: ");
  scanf("%s", contatos[contatos_count - 1].nome);
  printf("Digite o telefone do contato: ");
  scanf("%s", contatos[contatos_count - 1].telefone);
  printf("Digite o dia do aniversario do contato: ");
  scanf("%d", &contatos[contatos_count - 1].dia);
  printf("Digite o mes do aniversario do contato: ");
  scanf("%d", &contatos[contatos_count - 1].mes);
}

void remover_contato()
{
  char nome[50];
  printf("Digite o nome do contato a ser removido: ");
  scanf("%s", nome);
  for (int i = 0; i < contato_count; i++)
  {
    if (strcmp(contatos[i].nome, nome) == 0)
    {
      for (int j = i; j < contatos_count - 1; j++)
      {
        contatos[j] = contatos[j + 1];
      }
      contatos_count--;
      contatos = realloc(contatos, contatos_count * sizeof(struct contato));
      printf("Contato removido com sucesso!\n");
      return;
    }
  }
  printf("Contato nao encontrado!\n");
}

void procurar_contato()
{
  char nome[50];
  printf("Digite o nome do contato a ser pesquisado: ");
  scanf("%s", nome);
  for (int i = 0; i < contatos_count; i++)
  {
    if (strcmp(contatos[i].nome, nome) == 0)
    {
      printf("Nome: %s\n", contatos[i].nome);
      printf("Telefone: %s\n", contatos[i].telefone);
      printf("Aniversario: %d/%d\n", contatos[i].dia, contatos[i].mes);
      return;
    }
  }
  printf("Contato nao encontrado!\n");
}

void lista_contatos()
{
  for (int i = 0; i < contatos_count; i++)
  {
    printf("Nome: %s\n", contatos[i].nome);
    printf("Telefone: %s\n", contatos[i].telefone);
    printf("Aniversario: %d/%d\n", contatos[i].dia, contatos[i].mes);
  }
}

void lista_contatos_pela_letra()
{
  char letra;
  printf("Informe a letra: ");
  scanf(" %c", &letra);
  for (int i = 0; i < contatos_count; i++)
  {
    if (contatos[i].nome[0] == letra)
    {
      printf("Nome: %s\n", contatos[i].nome);
      printf("Telefone: %s\n", contacts[i].telefone);
      printf("Aniversario: %d/%d\n", contatos[i].dia, contatos[i].mes);
    }
  }
}

void lista_contatos_aniversario()
{
  int mes;
  printf("Informe o mes: ");
  scanf("%d", &mes);
  for (int i = 0; i < contatos_count; i++)
  {
    if (contatos[i].mes == mes)
    {
      printf("Nome: %s\n", contatos[i].nome);
      printf("Telefone: %s\n", contatos[i].telefone);
      printf("Aniversario: %d/%d\n", contatos[i].dia, contatos[i].mes);
    }
  }
}

void salvar_contatos()
{
  FILE *f = fopen("contatos.bin", "wb");
  fwrite(&contatos_count, sizeof(int), 1, f);
  fwrite(contatos, sizeof(struct contato), contatos_count, f);
  fclose(f);
}

void carregar_contatos()
{
  FILE *f = fopen("contatos.bin", "rb");
  if (f == NULL)
  {
    return;
  }
  fread(&contatos_count, sizeof(int), 1, f);
  contatos = malloc(contatos_count * sizeof(struct contato));
  fread(contatos, sizeof(struct contato), contatos_count, f);
  fclose(f);
}

int main()
{
  carregar_contatos();
  int op;
  do{
    printf("1 - Inserir contato;\n");
    printf("2 - Remover contato;\n");
    printf("3 - Pesquisar contato;\n");
    printf("4 - Listar todos os contatos;\n");
    printf("5 - Listar contatos por letra;\n");
    printf("6 - Listar aniversariantes do mes;\n");
    printf("0 - Sair;\n");
    printf("Opcao: ");
    scanf("%d", &op);
    switch (op){
    case 1: adicionar_contato();break;
    case 2: remover_contato();break;
    case 3: procurar_contato();break;
    case 4: lista_contatos();break;
    case 5: lista_contatos_pela_letra();break;
    case 6: lista_contatos_aniversario();break;
    }
  }while(op != 0);
  salvar_contatos();
  return 0;
}
