#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c, delta,x1,x2;
    scanf("%lf %lf %lf", &a,&b,&c);
    delta = pow(b,2.00) - 4 *a*c;
    if(delta < 0 || a == 0 ){
        printf("Impossivel calcular\n");
    }else{

    x1 = (-b +sqrt(delta))/ (2*a) ;
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
    }


    return 0;
}
