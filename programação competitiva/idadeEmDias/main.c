#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo,anos,meses, dias;
    scanf("%d", &tempo);

    anos = tempo / 365;
    tempo = tempo - anos * 365;
    meses  = tempo / 30;
    tempo = tempo - meses * 30;
    dias =  tempo;

    printf("%d ano (s)\n%d mes (es)\n%d dia (s)\n",anos, meses, dias);
    return 0;
}
