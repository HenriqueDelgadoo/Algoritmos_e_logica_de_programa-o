#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km;
    float gasto;
    scanf("%d %f", &km, &gasto);
    double consumo = km/gasto;
    printf("%.3f Km/l\n",consumo);
    return 0;
}
