#include <stdio.h>

int main() {
    int i;
    char str[100]="";
    printf("Digite a frase desejada: ");
    fgets(str, 100, stdin);
    for(i=0; i<100; i++){
        if((str[i] == 'r') && (str[i+1]== ' ')||(str[i] == 'R') && (str[i+1]== ' ')){
            printf("%c", str[i]);
        }else if((str[i]== 'r') && (str[i+1]!='r') || (str[i] == 'R') && (str[i+1] != 'r')){
        if(str[i]=='r'){
           printf("l");
        }else if(str[i]=='R'){
            printf("L");}
        }else if((str[i] == 'r') &&  (str[i+1]=='r')){
            printf("l");
            i++;
        }else{
            printf("%c", str[i]);
        }
    }
    return 0;
}
