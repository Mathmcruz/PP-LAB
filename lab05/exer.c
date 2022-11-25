1)
#include<stdio.h>

float dobro(float num){
    return num*2;
}
int main()
    {
        float num, d;
        printf("Digite um valor para calcular o dobro: ");
        scanf("%f", &num);
        d = dobro(num);
        printf("O dobro eh: %.2f", d);   
        return 0;
    }

2)
#include <stdio.h>

int data(int m){
    switch(m){
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
    }return 0;
}

int main()
{
    int d, m, a, ext;
    printf("Digite uma data (ex.: 22/11/2022) para transcrever por extenso: ");
    scanf("%d/%d/%d", &d, &m, &a);
    if(m>12 || m<1){
        printf("Mes invalido!");
    }else{
    printf("%d de ", d);
    data(m);
    printf(" de %d", a);}
    return 0;
}

3)
#include <stdio.h>

int sinal(int a){
    if(a>0){
        return 1;
    }else if(a<0){
        return -1;
    }else{
        return 0;
    }
}

int main()
{
    float num;
    int s;
    printf("Digite um numero: ");
    scanf("%f", &num);
    s= sinal(num);
    if(s==1){
        printf("Numero positivo! (%d)", s);
    }
    else if(s==-1){
        printf("Numero negativo! (%d)", s);
    }
    else{
        printf("O numero eh %d", s);
    }
    return 0;
}

4)
#include <stdio.h>
int quadrado(num){
    int i;
    for(i=0; i*i<num;i++){
    }
    if(i*i==num){
        return 1;
    }
}
int main() {
    int num, quadradop=0; 
    printf("Digite uma valor para verificar se um quadrado perfeito: ");
    scanf("%d", &num);
    if(num>=0){
       quadradop= quadrado(num);
        if(quadradop==1){
            printf("\n%d é um quadrado perfeito!", num);
        }else{
            printf("\n%d nao eh um quadrado perfeito!", num);
        }
        
    }else{
        printf("Numero invalido");
    }
    return 0;
}

5)
#include <stdio.h>
float volume(float raio){
    return 4*3.14*(raio*raio*raio)/3;
}
int main() {
    float vol=0, raio=0; 
    printf("Digite o valor do raio para calcular o volume da esfera: ");
    scanf("%f", &raio);
    vol=volume(raio);
    printf("O volume da esfera eh: %.2f", vol);
    return 0;
}

6)
#include <stdio.h>
int c(int h, int m, int s){
    return printf("A conversao em segundos eh: %d", ((h*60)*60)+m*60+s);
}

int main() {
    int h, m, s, conver;
    printf("Digite horas: ");
    scanf("%d", &h);
    printf("Digite os minutos: ");
    scanf("%d", &m);
    printf("Digite em segundos: ");
    scanf("%d", &s);
    conver= c(h, m, s);
    return 0;
}

7)
#include <stdio.h>
float con(float C){
    return printf("A conversao em Fahrenheit eh: %.2f",C*(9.0/5.0) +32);
}

float main() {
   float F, C, conv;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);
    conv= con(C);
    return 0;
}

8)
#include <stdio.h>
#include <math.h>
float h(float a, float b){
    return printf("O valor da hipotenusa eh: %.2f", sqrt(a*a+b*b));
}

float main() {
   float a, b, hip;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    hip= h(a, b);
    return 0;
}

9)
#include <stdio.h>

float vol(float h, float r){
    return printf("O volume do cilindro eh: %.2f", 3.141592*(r*r)*h );
}

float main() {
   float h, r, cc;
    printf("Digite o valor da altura: ");
    scanf("%f", &h);
    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    cc= vol(h, r);
    return 0;
}

10)
 #include <stdio.h>

float m(float n1, float n2){
    if(n1>n2){
    return printf("O maior numero eh: %.2f",  n1);
    }else if(n1==n2){
        return printf("Os dois numeros sao iguais");
    }else{
        return printf("O maior numero eh: %.2f",  n2);
    }
}
float main() {
   float n1, n2, maior;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um numero: ");
    scanf("%f", &n2);
    maior= m(n1, n2);
    return 0;
}

11)
#include <stdio.h>

float md(float n1, float n2, float n3, char m){
    if(m=='A'){
     printf("A media aritmetica das notas eh: %.2f", (n1+n2+n3)/3)  ; 
    }else if(m=='P'){
        printf("A media ponderada das notas eh: %.2f", (n1*5+n2*3+n3*2)/10);
    }else if(m!='A' || m!='P'){
        printf("Letra invalida");
    }
}
int main() {
   float n1, n2, n3, media;
   char m;
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite A se quer uma media aritmetica e digite P se quer uma media ponderada: ");
    scanf(" %c", &m);
    media= md(n1, n2, n3, m);
    return 0;
}

12)
#include <stdio.h>

int algarismo(int x){
int soma=0, dig;
    while(x>0){
            dig= x%10;
            soma+= dig;
            x/=10;
        }
    return printf("A soma dos algarismos eh: %d", soma);
}
int main()
{
    int num, digito;
    printf("Digite um numero inteiro para calcular a soma de seus algarismos: ");
    scanf("%d", &num);
    if(num>0){   
        algarismo(num);
    }
    else{
        printf("Numero invalido!");
    }
    return 0;
}
13)
#include <stdio.h>

float op(float n1, char s, float n2){
    if(s=='+'){
        return printf("O resultado da soma eh: %.2f", n1+n2);    
    }else if(s=='-'){
        return printf("O resultado da subtracao eh: %.2f", n1-n2);
    }else if(s=='*'){
        return printf("O resultado da multiplicacao eh: %.2f", n1*n2);
    }else if(s=='/'){
        return printf("O resultado da divisao eh: %.2f", n1/n2);}
}

int main()
{
    float n1, n2;
    char s;
    printf("Digite a operacao matematica basica de 2 numeros: ");
    scanf("%f%c%f", &n1, &s, &n2);
    op(n1, s, n2);
    return 0;
}

14)
#include <stdio.h>

float consumo(float d, float l){
if(d/l >0 && d/l<8){
        return printf("Consumo de %.2f Km/L, Venda o carro!", d/l);
    }
    else if(d/l>=8 && d/l<=14){
        return printf("Consumo de %.2f Km/L, Economico!", d/l);
    }
    else if(d/l>14){
        return printf("Consumo de %.2f Km/L, Super economico!", d/l);
    }
    else{
        printf("Erro!");
    }
}
int main()
{
    float d, l; 
    printf("Digite quantos km percorridos: ");
    scanf("%f", &d);
    printf("Digite quantos litros utilizados: ");
    scanf("%f", &l);
    consumo(d, l);
    return 0;
}

15)
#include <stdio.h>

float tri(float a, float b, float c){
    if((a<b+c) && (b<a+c) && (c<a+b)){
        return 1;
    }else{
        return printf("Nao eh um triangulo");}
}

float tipoTri(float x, float y, float z){
    if(x==y && y==z){
        return printf("Triangulo Equilatero");
    }else if(x==y || x==z || y==z){
        return printf("Triangulo Isosceles");
    }else if(x!=y && x!=z && y!=z){
        return printf("Triangulo Escaleno");}   
}

int main()
{
    float l1, l2, l3, Tri=0; 
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &l1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &l2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &l3);
    if(l1>0 && l2>0 && l3>0){
        Tri= tri(l1, l2, l3);   
    }else{
        printf("Erro.");}
    if(Tri==1){
        tipoTri(l1, l2, l3);}    
    return 0;
}

16)
#include <stdio.h>

int l(int t){
    int i;
    for(i=1; i<=t; i++){
        printf("=");
    }
    return 0;
}

int main()
{
    int t;
    printf("Quantos sinais '=' voce quer? ");
    scanf("%d", &t);
    l(t);
    return 0;
}

17)
#include <stdio.h>

float soma(int a, int b){
    int i, s=0;
    for(i=a+1; i<b; i++){
        s+=i;
    }
    return printf("A soma dos numeros entre %d a %d eh: %d", a, b, s);
}
int main()
{
    int n1, n2;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro positivo: ");
    scanf("%d", &n2);
    soma(n1, n2);
    return 0;
}

18)
#include <stdio.h>

float quadrado(int a){
    return a*a;
}

int main()
{
    int n1, n2, q1, q2;
    printf("Digite um numero inteiro e positivo para calcular seu quadrado: ");
    scanf("%d", &n1);
    printf("Digite um numero inteiro e positivo para calcular seu quadrado: ");
    scanf("%d", &n2);
    q1= quadrado(n1);
    q2= quadrado(n2);
    printf("O quadrado de %d eh: %d \n", n1, q1);
    printf("O quadrado de %d eh: %d \n", n2, q2);
    return 0;
}

19)
#include <stdio.h>

int fatorial(int num){
    int i, f=1;
    for(i=1; i<=num; i++){
        f*=i;
    }
    return f;
}

int main()
{
    int num, fat;
    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%d", &num);
    if(num>=0){
        fat= fatorial(num);
        printf("O fatorial de %d eh: %d", num, fat);
    }else{
        printf("Erro!");}
    return 0;
}

20)
#include <stdio.h>

int Pri(int num){
    int i, j, primo, p=0;
    for(i=1; i<num; i++){
       primo=1;
       for(j = 2; j <= i; j++) {
           if(((i % j) == 0) && (j != i)){
               primo = 0;
               break;
           }
       }if(primo!=0 && i!=1){
            p++;}
    } 
    return p;
}

int main()
{
    int num, primo;
    printf("Digite um numero e para calcular quantos numeros primos existem a abaixo desse numero: ");
    scanf("%d", &num);
    if(num>0){
        primo= Pri(num);
        printf("Ha %d numeros primos abaixo de %d", primo, num);
    }else{
        printf("Erro!");}
    return 0;
}

21)
#include <stdio.h>

int excla(int l){
    int i, j;
    for(i=1; i<=l; i++){
        for(j=1; j<=i; j++){
            printf("!");
        }
        printf("\n");}
}

int main()
{
    int l;
    printf("Digite quantas linhas voce quer na arvore: ");
    scanf("%d", &l);
    if(l>0){
        excla(l);
    }else{
        printf("Erro.");}
    return 0;
}

23)
#include <stdio.h>

int triLateral(int l){
    int i, j;
    for(i=1; i<=l; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=(l-1); i>=1; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");}
}

int main()
{
    int l;
    printf("Digite a largura desejada para o triangulo lateral: ");
    scanf("%d", &l);
    if(l>0){
        triLateral(l);
    }else{
        printf("Erro!");}
    return 0;
}

24)
#include <stdio.h>

int tri(int h){
    int i, j, k;
    for(i=1; i<=h; i++){
        for(j=1; j<=(i*2-1); j++){
            for(k=i; k<h; k++){
                if(j==1){
                    printf(" "); 
                }
            }
            printf("*");        
        }
        printf("\n");   
    }
}

int main()
{
    int h;
    printf("Digite a altura que voce quer no triangulo: ");
    scanf("%d", &h);
    if(h>0){
        tri(h);
    }else{
        printf("Erro!");}
    return 0;
}
