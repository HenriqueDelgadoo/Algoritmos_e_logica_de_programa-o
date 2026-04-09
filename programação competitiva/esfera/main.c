#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, PI;
    PI = 3.14159;
    scanf("%lf",&raio);
    double volume = (4.0/3.0)* PI * (raio*raio*raio);
    printf("VOLUME = %.3f\n",volume);
    return 0;
}
