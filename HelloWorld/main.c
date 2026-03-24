#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // biblioteca para alterar a linguagem

int main()
{
    setlocale(LC_ALL, "Portuguese"); // para usar a linguagem em portugues
    printf("Olá mundo!\n");
    system("pause"); // para executar no windows
    return 0;
}
