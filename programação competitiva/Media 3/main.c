#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3,n4,n5, media;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    media =  (n1*0.2) + (n2*0.3) + (n3*0.4) +(n4 *0.1);

    if( media >= 7){
        printf("Media: %.1f\nAluno aprovado.\n",media);
    }else if( media < 5){
        printf("Media: %.1f\nAluno reprovado.\n",media);
    }else{
        printf("Media: %.1f\nAluno em exame.\n",media);
        scanf("%lf",&n5);
        if((media + n5)/2 >= 5){
            printf("Nota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n", n5,(media + n5)/2);
        }else{
            printf("Nota do exame: %.1f\nAluno reprovado.\nMedia final: %.1f\n", n5,(media + n5)/2);
        }
    }

    return 0;
}

