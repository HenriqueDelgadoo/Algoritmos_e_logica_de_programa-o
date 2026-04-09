#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codPec1,qntdPec1,codPec2, qntdePec2;
    float valorPec1, valorPec2, valorTotal;
    scanf("%d %d %f %d %d %f",&codPec1,&qntdPec1,&valorPec1,&codPec2,&qntdePec2,&valorPec2);
    valorTotal = valorPec1 * qntdPec1 + valorPec2 * qntdePec2;
    printf("VALOR A PAGAR: R$ %.2f\n",valorTotal);


    return 0;
}
