1)
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

2)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("digite um numero\n");
    scanf("%f", &num);
    if(num>=0){
        printf("A raiz quadrada eh %f\n", sqrt(num));
    }else{
    printf("o numero %f eh invalido\n", num);
    }
    return 0;
}

3)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("digite um numero\n");
    scanf("%f", &num);
    if(num>=0){
        printf("A raiz quadrada eh %f\n", sqrt(num));
    }else{
    printf("O quadrado eh %f\n", num*num);
    }
    return 0;
}

4)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("digite um numero\n");
    scanf("%f", &num);
    if(num>=0){
        printf("O quadrado eh %f\n", num*num);
        printf("A raiz quadrada %f\n", sqrt(num));
    }
    return 0;
}

5)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rest;
    printf("digite um numero\n");
    scanf("%d", &num);
    rest= num % 2;
    if(rest == 0){
        printf("O numero eh par");
    }else{
        printf("O numero eh impar");
    }
    return 0;
}

6)
  int n1, n2,dif1, dif2;
    printf("digite dois numeros\n");
    scanf("%d %d", &n1, &n2);
    if(n1>n2){
        printf("O maior eh %d, e a diferenca eh %d", n1, dif1= n1 - n2);
    }else{
        printf("O maior eh %d, e a diferenca eh %d", n2, dif2= n2 - n1);
    }
    return 0;
}

7)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2,dif1, dif2;
    printf("digite dois numeros\n");
    scanf("%d %d", &n1, &n2);
    if(n1>n2){
        printf("O maior eh %d, e a diferenca eh %d", n1, dif1= n1 - n2);
    }else if(n2>n1){
        printf("O maior eh %d, e a diferenca eh %d", n2, dif2= n2 - n1);
    }else{
    printf("os dois sao iguais");
    }
    return 0;
}

8)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("digite duas notas\n");
    scanf("%f %f", &n1, &n2);
    if( n1 && n2 <= 10.0 && n1 && n2>=0.0){
        printf("A media das notas eh %f", (n1+n2)/2);
    }else{
        printf("Os valores nao sao validos devem ser entre 0.0 e 10.0");
    }
    return 0;
}

9)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, pe;
    printf("digite o salario e o valor da prestacao do emprestimo\n");
    scanf("%f %f", &s, &pe);
    if(pe<s*1.2){
        printf("Emprestimo concedido");
    }else{
        printf("Emprestimo nao concedido");
    }
    return 0;
}

10)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, s;
    printf("Digite a altura \n");
    scanf("%f", &h);
    printf("Digite 1 para homem ou 2 para mulher \n");
    scanf("%f", &s);
    if(s==1)
        {
        printf("Seu peso ideal eh: %f", (72.7*h)-58.0);
    }else if(s==2){
            printf("Seu peso ideal eh: %f",(62.1 * h)- 44.7);
    }
    return 0;
}

11)
#include <stdio.h>

int main()
{
    int n=0, n1=0, n2=0, n3, soma=0;
    printf("Digite um numero inteiro(menor que 1000):\n");
    scanf("%d", &n);
    if(n1<0){
        printf("Numero invalido");
    }else if(n>1000){
    printf("Numero invalido");
    }else{
        n1= n/100;
        n2= n%100/10;
        n3= n%100%10;
        soma= n1+n2+n3;
        printf("A soma eh: %d", soma);
    }
    return 0;
}


12)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float num;
    printf("Digite um numero \n");
    scanf("%f", &num);
    if(num>0)
        {
        printf("O logaritmo eh: %f", log10(num));
    }else if(num<0){
            printf("numero invalido");
    }
    return 0;
}

13)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n1, n2, n3, n;
    printf("Digite a primeira nota \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota \n");
    scanf("%f", &n3);
    n = (n1*1+n2*1+n3*2)/4;
    if(n>60){
        printf("Aprovado!");
    }else if(n<60){
            printf("Reprovado.");
    }
    return 0;
}

14)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n1, n2, n3, n;
    printf("Digite a nota do laboratorio \n");
    scanf("%f", &n1);
    printf("Digite a nota da avaliacao semestral \n");
    scanf("%f", &n2);
    printf("Digite a nota do exame final \n");
    scanf("%f", &n3);
    n = (n1*2+n2*3+n3*5)/10;
    if(n>4.9 && n<10){
        printf("Aprovado!");
    }else if(n>3 && n<4.9){
    printf("Recuperacao");
    }
    else if(n<2.9 && n>0){
            printf("Reprovado.");
    }else{
    printf("Notas invalidas");
    }
    return 0;
}

15)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num;
    printf("Digite um numero entre 1 e 7 \n");
    scanf("%d", &num);
    switch(num){
    case 1: printf("Domingo");break;
    case 2: printf("Segunda-feira");break;
    case 3: printf("Terca-feira");break;
    case 4: printf("Quarta-feira");break;
    case 5: printf("Quinta-feira");break;
    case 6: printf("Sexta-feira");break;
    case 7: printf("Sabado");break;
    default: printf("Numero invalido");
    }
    return 0;
}

16)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num;
    printf("Digite um numero entre 1 e 12 \n");
    scanf("%d", &num);
    switch(num){
    case 1: printf("Janeiro");break;
    case 2: printf("Fevereiro");break;
    case 3: printf("Marco");break;
    case 4: printf("Abril");break;
    case 5: printf("Maio");break;
    case 6: printf("Junho");break;
    case 7: printf("Julho");break;
    case 8: printf("Agosto");break;
    case 9: printf("Setembro");break;
    case 10: printf("Outubro");break;
    case 11: printf("Novembro");break;
    case 12: printf("Dezembro");break;
    default: printf("Numero invalido");
    }
    return 0;
}

17)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, bm, bM, h;
    printf("Digite a altura \n");
    scanf("%f", &h);
    printf("Digite a base maior \n");
    scanf("%f", &bM);
    printf("Digite a base menor \n");
    scanf("%f", &bm);
    if(bm<=0 || bM<=0 || h<=0){printf("Operacao invalida");
    return 0;}else if(bm>=0 || bM>=0 || h>=0){
    printf("A area eh %f\n", a = ((bM + bm) * h)/2);
    }
    return 0;
}

18)
#include <stdio.h>
#include <stdlib.h>

int main() {
  char op;
  float n1, n2;
  printf("Escolha e digite uma das operacoes:\n + para adicao;\n - para subtracao;\n * para multiplicacao;\n / para divisao; \n");
  scanf("%c", &op);
  printf("Digite um numero \n");
  scanf("%f", &n1);
  printf("Digite outro numero \n");
  scanf("%f", &n2);
  switch(op){
    case '+': printf("O resultado eh: %f", n1+n2);break;
    case '-': printf("O resultado eh: %f", n1-n2);break;
    case '*': printf("O resultado eh: %f", n1*n2);break;
    case '/': printf("O resultado eh: %f", n1/n2);break;
    default: printf("Operacao invalida");break;
  }
  return 0;
}

19)
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  printf("Digite um numero inteiro\n");
  scanf("%d", &num);
  if(num%3==0 && num%5==0 || num%5==5){
  printf("O numero eh divisivel por 3 e 5");
  }else if(num%3==0){
      printf("O numero eh divisivel por 3");}
      else if(num%5==0 || num%5==5){
            printf("O numero eh divisivel por 5");}
  return 0;
}

20)
#include <stdio.h>
#include <stdlib.h>

int main() {
  float A, B, C;
  printf("Digite o valor de A: \n");
  scanf("%f", &A);
  printf("Digite o valor de B: \n");
  scanf("%f", &B);
  printf("Digite o valor de C: \n");
  scanf("%f", &C);
  if((A<B+C)&&(B<A+C)&&(C<A+B)){
        if(A==B && B==C){
            printf("Eh um triangulo equilatero\n");
        }else if((A==B || A==C && C!=B)||(B==A || B==C && A!=C)||(C==B || A==C && B!=A)){ ou isso A==B || A==C || C==B kkkkkkk
        printf("Eh um triangulo isosceles\n");
        }else if(A!=B && A!=C && B!=C){
        printf("Eh um triangulo escaleno\n");}
       }else{
        printf("Nao eh um triangulo");
  }
  return 0;
}
21)
#include <stdio.h>
#include <stdlib.h>

int main() {
  int op, n1, n2;
  printf("Escolha a opcao:\n1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
  scanf("%d", &op);
  printf("Digite um valor: \n");
  scanf("%d", &n1);
  printf("Digite outro valor: \n");
  scanf("%d", &n2);
  switch(op){
  case 1: printf("A soma eh: %d", n1+n2);break;
  case 2: printf("A diferenca eh: %d", n1-n2);break;
  case 3: printf("O produto eh: %d", n1*n2);break;
  case 4: if(n2!=0){printf("A divisao eh: %d", n1/n2);}
  else{printf("O denominador tem que ser diferente de 0");};break;
  default: printf("Operacao invalida");break;
  }
  return 0;
}

22)
#include <stdio.h>
#include <stdlib.h>

int main() {
  float id, ts;
  printf("Digite sua idade: \n");
  scanf("%f", &id);
  printf("Digite o tempo de servico efetuado: \n");
  scanf("%f", &ts);
  if(id>=65){
    printf("Pode aposentar");
  }else if(ts>=30){
  printf("Pode aposentar");
  }else if(id>=60 && ts>=25){
  printf("Pode aposentar");
  }else if((id<60 && ts<25)||(id<65 || ts<30)){
  printf("Nao pode aposentar");
  }return 0;
}

23)
#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  printf("Digite o ano: \n");
  scanf("%d", &a);
  if(a%400==0){
    printf("O ano eh bissexto!");
  }else if(a%4==0 && a%100!=0){
  printf("O ano eh bissexto!");
  }else{
  printf("O ano nao eh bissexto");
  } return 0;
  }

24)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char e;
  float v;
      printf("Escolha um estado: \nM - para Minas Gerais\nS - para Sao Paulo\nR - para Rio de Janeiro\nm - para Mato Grosso do Sul\n");
      scanf("%c", &e);
      printf("Digite o valor: \n");
      scanf("%f", &v);
      switch(e){
          case 'M': printf("O valor acrescido com imposto eh: %f", v * 1.07);break;
          case 'S': printf("O valor acrescido com imposto eh: %f", v * 1.12);break;
          case 'R': printf("O valor acrescido com imposto eh: %f", v * 1.15);break;
          case 'm': printf("O valor acrescido com imposto eh: %f", v * 1.08);break;
          default : printf("Estado invalido");break;
          }return 0;
}

25)
int main()
{
  float d, b, a, c;
      printf("Digite o valor de a: \n");
      scanf("%f", &a);
      printf("Digite o valor de b: \n");
      scanf("%f", &b);
      printf("Digite o valor de c: \n");
      scanf("%f", &c);
      d= (b*b)-4*a*c;
      if(d>0){
        printf("A primeira raiz eh: %f", (-b + sqrt(d))/(2*a));
        printf("A segunda raiz eh: %f", (-b - sqrt(d))/(2*a));
      }else if(d==0){
      printf("Raiz unica! o resultado eh: %f", -b/(2*a));
      }else if(d<0){
      printf("Nao existe raiz");
      }return 0;
}

26)
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float km, l, c;
      printf("Digite a distancia em km: \n");
      scanf("%f", &km);
      printf("Digite a quantidade de gasolina em litros: \n");
      scanf("%f", &l);
      c= km/l;
      if(c<8){
        printf("Venda o carro!");
      }else if(c>=8 && c<=14){
      printf("Economico!");
      }else if(c>14){
      printf("Super economico!");}
      return 0;
}

27)
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
      printf("Digite a idade: \n");
      scanf("%d", &i);
      if(i>=5 && i<=7){
      printf("Infantil A");
      }else if(i>=8 && i<=10){
      printf("Infantil B");
      }else if(i>=11 && i<=13){
      printf("Juvenil A");
      }else if(i>=14 && i<=17){
      printf("Juvenil B");
      }else if(i>=18){
      printf("Senior");
      }else if(i<5){
      printf("Idade invalida");
      }
      return 0;
}

28)
int main() {
  int m;
  float x, y, z;
  printf("Digite tres numeros:\n");
  scanf("%f%f%f", &x, &y, &z);
  printf("Escolha uma das medias:\n1- Geometrica;\n2- Ponderada;\n3- Harmonica;\n4- Aritmetica;\n");
  scanf("%d", &m);
  switch(m){
    case 1: printf("A media eh: %f", cbrt(x*y*z));break;
    case 2: printf("A media eh: %f", ((1*x)+(2*y)+(3*z))/6);break;
    case 3: printf("A media eh: %f", 1/(1/x+1/y+1/z));break;
    case 4: printf("A media eh: %f", (x+y+z)/3);break;
    default: printf("Nao existe essa opcao");
  }
  return 0;
}

29)
#include <stdio.h>
#include <math.h>

int main()
{
 int i,acertos=0;
 float a, b, soma, resp;
for(i=0;i<5;i++){
 a = (rand() % 100) + 1;
 b = (rand() % 100) + 1;
 soma = a+b;
 resp = soma;
 printf("qual é a soma de %.2f + %.2f?\n",a,b);
 scanf("%f",&resp);
 if (resp != soma)
  printf("resposta errada. a resposta certa e:%.2f\n",soma);
 else
 acertos ++;
}
printf("voce acertou em:%d\n",acertos);
return 0;
}

30)
#include <stdio.h>

int main() {
  float n1, n2, n3;
  printf("Digite tres numeros: \n");
  scanf("%f%f%f", &n1, &n2, &n3);
  if(n1>=n2 && n2>=n3){
    printf("A ordem crescente eh: %f, %f, %f", n3, n2, n1);
  }else if(n1>=n3 && n3>=n2){
    printf("A ordem crescente eh: %f, %f, %f", n2, n3, n1);
  }else if(n2>=n1 && n1>=n3){
    printf("A ordem crescente eh: %f, %f, %f", n3, n1, n2);
  }else if(n2>=n3 && n3>=n1){
    printf("A ordem crescente eh: %f, %f, %f", n1, n3, n2);
  }else if(n3>=n1 && n1>=n2){
    printf("A ordem crescente eh: %f, %f, %f", n2, n1, n3);
  }else if(n3>=n2 && n2>=n1){
    printf("A ordem crescente eh: %f, %f, %f", n1, n2, n3);
  }
  return 0;
}

31)
#include <stdio.h>

int main() {
  float p, h;
  printf("Digite a altura (exemplo: 1.70):\n");
  scanf("%f", &h);
  printf("Digite o peso:\n");
  scanf("%f", &p);
  if(h<1.20){
    if(p<60){
      printf("Classificacao A");
    }else if(p>=60 && p<90){
      printf("Classificacao D");
    }else if(p>=90){
      printf("Classificacao G");}
  }else if(h>=1.20 && h<1.70){
    if(p<60){
      printf("Classificacao B");
    }else if(p>=60 && p<90){
      printf("Classificacao E");
    }else if(p>=90){
      printf("Classificacao H");}
    }else if(h>=1.70){
      if(p<60){
      printf("Classificacao C");
    }else if(p>=60 && p<90){
      printf("Classificacao F");
    }else if(p>=90){
      printf("Classificacao I");}
      }
  return 0;
}

32)
int main() {
  float q, v, c;
  printf("Cardapio:\n\n-Especificacao-codigo-preco\nCachorro Quente  100  1.20\nBauru Simples    101  1.30\nBauro com Ovo    102  1.50\nHamburguer       103  1.20\nCheeseburguer    104  1.70\nSuco             105  2.20\nRefrigerante     106  1.00\n\nDigite o codigo desejado:\n");
  scanf("%f", &c);
  printf("Digite a quantidade desejada:\n");
  scanf("%f", &q);
  if(c==100){
    printf("Valor a ser pago eh: %f", q*1.20);
  }else if(c==101){
    printf("Valor a ser pago eh: %f", q*1.30);
  }else if(c==102){
    printf("Valor a ser pago eh: %f", q*1.50);
  }else if(c==103){
    printf("Valor a ser pago eh: %f", q*1.20);
  }else if(c==104){
    printf("Valor a ser pago eh: %f", q*1.70);
  }else if(c==105){
    printf("Valor a ser pago eh: %f", q*2.20);
  }else if(c==106){
    printf("Valor a ser pago eh: %f", q*1.00);
  }else{
    printf("Codigo invalido!");
  }
  return 0;
}

33)
#include <stdio.h>
int main(){
    float a, n, v;
    printf("Digite o valor do produto:\n");
    scanf("%f", &v);
    if(v<50){
        printf("Barato");
    }else if(v>=50 && v<100){
      v = v*1.10;
        if(v<80){
            printf("Barato");
        }else if(v>=80 && v<120){
            printf("Normal");
        }
    }else if(v>=100){
        v=v*1.15;
        if(v>=120 && v<200){
            printf("Caro");
        }else if(v>=200){
            printf("Muito caro");
        }else if(v<120){
            printf("Normal");
        }
    }
    return 0;
}

34)
#include <stdio.h>

int main()
{
    int f;
    float n;
    char c;
    printf("Digite a nota:\n");
    scanf("%f", &n);
    printf("Digite o numero de faltas:\n");
    scanf("%d", &f);
    if(n >= 9.0){
            c = 'A';}
    else if(n >= 7.5){
            c = 'B';}
    else if(n >= 5.0){
            c = 'C';
            }
    else if(n >= 4.0){
            c = 'D';
    }else{
        c = 'E';}
    if (f > 20){
            c++;}
    printf("Conceito: %c", c);
    return 0;
}

35)
#include <stdio.h>

int main()
{
    int d, m, a;
    printf("Digite o dia: ");
    scanf("%d", &d);
    printf("Digite o mes: ");
    scanf("%d", &m);
    printf("Digite o ano: ");
    scanf("%d", &a);
    if (m < 1 || m > 12) {
        printf("Mes invalido.");
    } else if (d < 1 || d > 31) {
        printf("Dia inválido.");
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d > 30) {
            printf("Dia inválido.");
        } else {
            printf("Data válida.");
        }
    } else if (m == 2) {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
            if (d > 29) {
                printf("Dia invalido.");
            } else {
                printf("Data valida.");
            }
        } else {
            if (d > 28) {
                printf("Dia invalido.");
            } else {
                printf("Data valida.");
            }
        }
    } else {
        printf("Data valida.");
    }
    return 0;
}
36)
#include <stdio.h>

int main()
{
    float v, c, e=0;
    printf("Digite o valor da venda:\n");
    scanf("%f", &v);
    e= v >= 100000 ? 700+(v*0.16):e;
    e= v < 100000 && v>=80000? 650 +(v*0.14):e;
    e= v < 80000 && v >=60000? 600 +(v*0.14):e;
    e= v < 60000 && v >=40000? 550 +(v*0.14):e;
    e= v < 40000 && v >=20000? 500 +(v*0.14):e;
    e= v < 20000? (400+(v*0.14)):e;
    printf("O valor da comissao eh: %.2f", e);
    return 0;
}

37)
#include <stdio.h>

int main()
{
    int hc, mc, hp, mp, tc, tp, d, dh;
    float v = 0;
    printf("Digite as horas e minutos da chegada:\n");
    scanf("%d%d", &hc, &mc);
    printf("Digite as horas e minutos da partida:\n");
    scanf("%d%d", &hp, &mp);
    if (hc > hp) hc-= 24;
    tc = hc * 60 + mc;
    tp = hp * 60 + mp;
    d = tp - tc;
    if (d % 60 > 0) {
        dh = d / 60 + 1;
    } else {
        dh = d / 60;
    }
    if (dh <= 2) {
        v = dh * 1;
    } else if (dh <= 4) {
        v = dh * 1.4;
    } else {
        v = dh * 2;
    }
    printf("O valor a pagar eh:\nR$%.2f", v);
    return 0;
}

38)
#include <stdio.h>

int main()
{
    int d, m, a, at=2022;
    printf("Digite o dia: ");
    scanf("%d", &d);
    printf("Digite o mes: ");
    scanf("%d", &m);
    printf("Digite o ano: ");
    scanf("%d", &a);
    if(a>at){
        printf("Ano invalido");
    }
     else if(m < 1 || m > 12) {
        printf("Mes invalido.");
    } else if (d < 1 || d > 31) {
        printf("Dia inválido.");
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d > 30) {
            printf("Dia inválido.");
        } else {
            printf("Data válida.");
        }
    } else if (m == 2) {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
            if (d > 29) {
                printf("Dia invalido.");
            } else {
                printf("Data valida.");
            }
        } else {
            if (d > 28) {
                printf("Dia invalido.");
            } else {
                printf("Data valida.");
            }
        }
    } else {
        printf("Data valida.");
    }
    return 0;
}

39)
#include <stdio.h>

int main()
{
    float s, r, b;
    int t;

    printf("Digite o salario atual:\n");
    scanf("%f", &s);
    printf("Digite o tempo de servico(em anos):\n");
    scanf("%d", &t);
    if (s <= 500.0){
            r = 0.25;}
    else if (s <= 1000.0){
            r = 0.20;}
    else if (s <= 1500.0){
            r = 0.15;}
    else if (s <= 2000.0){
            r = 0.10;
    }else{
        r = 0.0;}

    if (t < 1){
            b = 0.0;}
    else if (t <= 3){
            b = 100.0;}
    else if (t <= 6){

     b = 200.0;}
    else if (t <= 10) {
            b = 300.0;
    }else {
        b = 500.0;}
    printf("O salario reajustado eh: %.2f", s * (1 + r) + b);
    return 0;
}

40)
#include <stdio.h>

int main()
{
    float cf, c;
    printf("Digite o custo de fabrica:\n");
    scanf("%f", &cf);
    if(cf<12000){
       printf("O custo do carro novo: %.2f", c=cf*1.05);
    }else if(cf>=12000 && cf<=25000){
    printf("O custo do carro novo: %.2f", c= cf+(cf*0.10)+(cf*0.15));
    }else if(cf>25000){
    printf("O custo do carro novo: %.2f", c= cf+(cf*0.15)+(cf*0.20));
    }
    return 0;
}
