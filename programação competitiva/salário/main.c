#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID, horas;
    float valorHora;
    scanf("%d %d %f", &ID, &horas, &valorHora);

    float salario = horas * valorHora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",ID,salario);
    return 0;
}
