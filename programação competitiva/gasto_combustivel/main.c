#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, velocidade;
    scanf("%d %d",&horas, &velocidade);
    float litros = (velocidade * horas) / 12.0;
    printf("%.3f\n",litros);
    return 0;
}
