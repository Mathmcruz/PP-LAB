#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora, min, seg, dur, tempf, tempseg, r;
    printf("Digite o horario atual em hora, minuto e segundo\n");
    scanf("%d %d %d", &hora, &min, &seg);
    printf("Digite a duracao em segundos\n");
    scanf("%d", &dur);
    tempseg = hora*3600 + min*60 + seg;
    tempf = tempseg + dur;
    hora= (tempf - (tempf % 3600))/3600;
    r= tempf % 3600;
    min = (r -(r %60))/60;
    r= r %60;
    tempf= r;
    printf("O experimento terminou as %d horas, %d minutos, %d segundos\n", hora, min, tempf);
    return 0;
}
