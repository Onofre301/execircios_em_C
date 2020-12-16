#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, sub, ad, div, multi;

    printf("Digite o primeiro numero \n");
    scanf("%f",&n1);
    printf("Digite o segundo numero \n");
    scanf("%f",&n2);

    sub=n1-n2;
    ad=n1+n2;
    div=n1/n2;
    multi=n1*n2;

    printf("Multiplicacao = %f\n",multi );
    printf("Subtracao = %f\n",sub);
    printf("Adicao = %f\n",ad);
    printf("Divisao = %f\n",div);

    return 0;
}
