#include <stdio.h>  
#include <stdlib.h>

int main()
{
    float valor, desconto, valordes, valorfinal, porcentagemdes;

    printf("Digite o valor do produto ");
    scanf("%f",&valor);
    printf("Digite a porcentagem do desconto  ");
    scanf("%f",&desconto);

    porcentagemdes=desconto/100;
    valordes=valor*porcentagemdes;
    valorfinal=valor-valordes;
    printf("O valor do desconto e de R$%f\n",valordes);
    printf("O valor final com desconto e de R$%f",valorfinal);


    return 0;
}
