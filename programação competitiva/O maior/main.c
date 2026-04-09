#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x, maior,maiorx;
    scanf("%d %d %d", &a, &b, &x);

    maior = (a+b + abs(a-b)) /2;
    maiorx = (maior + x + abs(maior-x))/2;
    printf("%d eh o maior\n",maiorx);

    return 0;
}
