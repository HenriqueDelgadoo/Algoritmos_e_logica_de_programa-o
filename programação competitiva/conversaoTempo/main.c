#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, horas ,minutos, segundos;
    scanf("%d",&tempo);

    if(tempo/3600 > 0){
        horas = tempo / 3600;
        tempo = tempo - horas * 3600;
        printf("%d:",horas);
    }else{
        printf("0:");
    }
    if(tempo/60 > 0){
        minutos = tempo / 60;
        tempo = tempo - minutos * 60;
        printf("%d:",minutos);
    }else{
        printf("0:");
    }
    if(tempo > 0 ){
        printf("%d\n", tempo);
    }else {
        printf("0\n");
    }

    return 0;
}
