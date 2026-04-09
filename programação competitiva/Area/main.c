#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf",&A, &B,&C);

    double At, Ac, Atra,Aq,Ar;
    At = A * C /2;
    Ac = (C * C) * 3.14159;
    Atra = (A + B) * C /2;
    Aq = B * B;
    Ar = A * B;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", At,Ac,Atra,Aq,Ar);


    return 0;
}
