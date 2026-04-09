#include <stdio.h>

int main() {
    int num, x;

    // 1. Lendo o valor
    if (scanf("%d", &num) != 1) return 0;

    // O Beecrowd geralmente exige imprimir o valor lido primeiro
    printf("%d\n", num);

    // 2. Lógica Sequencial: Calculamos quanto cabe e subtraímos do total

    // Notas de 100
    printf("%d nota(s) de R$ 100,00\n", num / 100);
    num = num % 100; // O 'num' agora passa a ser apenas o resto

    // Notas de 50
    printf("%d nota(s) de R$ 50,00\n", num / 50);
    num = num % 50;

    // Notas de 20
    printf("%d nota(s) de R$ 20,00\n", num / 20);
    num = num % 20;

    // Notas de 10
    printf("%d nota(s) de R$ 10,00\n", num / 10);
    num = num % 10;

    // Notas de 5
    printf("%d nota(s) de R$ 5,00\n", num / 5);
    num = num % 5;

    // Notas de 2
    printf("%d nota(s) de R$ 2,00\n", num / 2);
    num = num % 2;

    // Notas de 1
    printf("%d nota(s) de R$ 1,00\n", num / 1);

    return 0;
}
