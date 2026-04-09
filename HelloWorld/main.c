#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> // biblioteca para alterar a linguagem
#include <windows.h>

int main()
{

    int x = 5;
    int y = 5;
    char tecla;

    while(1){
        system("cls");

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == y && j == x) {
                    printf("O ");
                } else {
                    printf(".");
                }
            }
            printf("\n");
        }

        printf("\nUse WASD para se mover (Q para sair): ");

        tecla = getch();

        switch (tecla){
            case 'w': y--; break;
            case 's': y++; break;
            case 'a': x--; break;
            case 'd': x++; break;
            case 'q': return 0;
        }

        if (x < 0) x = 0;
        if (x > 9) x = 9;
        if (y < 0) y = 0;
        if (y > 9) y = 9;
    }

    return 0;
}
