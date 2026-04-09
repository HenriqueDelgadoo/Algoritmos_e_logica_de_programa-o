#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor;
    // notas
    int notas;
    scanf("%lf", &valor);
    notas = valor / 100;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", notas);
    valor = valor - notas * 100;
    notas = valor / 50;
    printf("%d nota(s) de R$ 50.00\n", notas);
    valor = valor - notas * 50;
    notas = valor/20;
    printf("%d nota(s) de R$ 20.00\n", notas);
    valor = valor - notas *20;
    notas = valor /10;
    printf("%d nota(s) de R$ 10.00\n", notas);
    valor  =  valor  - notas * 10;
    notas =  valor / 5;
    printf("%d nota(s) de R$ 5.00\n", notas);
    valor  =  valor - notas *5;
    notas =  valor/ 2;
    printf("%d nota(s) de R$ 2.00\n", notas);
    valor = valor - notas *2;
    notas = valor /1;

    // moedas
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", notas);
    valor =  valor - notas;
    notas = valor/0.5;
    printf("%d moeda(s) de R$ 0.50\n", notas);
    valor = valor - notas *0.5;
    notas = valor / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", notas);
    valor = valor - notas * 0.25;
    notas = valor / 0.10;
    printf("%d moeda(s) de R$ 0.10\n", notas);
    valor  = valor - notas *0.10;
    notas = valor / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", notas);
    valor = valor - notas *0.05;
    notas = valor/0.01;
    printf("%d moeda(s) de R$ 0.01\n", notas);

    return 0;
}
