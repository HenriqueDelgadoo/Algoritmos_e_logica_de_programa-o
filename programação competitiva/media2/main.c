#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B,&C);
    double media = A*0.2 + B*0.3 + C*0.5;
    printf("MEDIA = %.1lf\n",media);
    return 0;
}
