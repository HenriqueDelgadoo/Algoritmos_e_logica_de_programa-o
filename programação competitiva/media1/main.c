#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A;
    double B;
    scanf("%lf %lf",&A,&B );
    double  media = (A * 0.35 + B * 0.75) * 10.0/11.0;
    printf("MEDIA = %.5lf\n",media);


    return 0;
}
