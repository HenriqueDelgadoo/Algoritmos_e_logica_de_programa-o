#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [50];
    double salario, vendas,salarioTotal;

    scanf("%s %lf %lf",nome, &salario, &vendas);
    salarioTotal = (vendas * 0.15) + salario;
    printf("TOTAL = R$ %.2lf\n",salarioTotal);
    return 0;
}
