#include <stdio.h>;
#include <stdlib.h>;

main()
{
    float salarioAtual, reajuste, salarioFinal, porcenReajuste;
    int sinal;
    printf("O valor do reajuste e positivo ou negativo (1-positivo, 2-negativo)");
    scanf("%d",&sinal);
    printf("Digite o valor do salario atual ");
    scanf("%f",&salarioAtual);
    printf("Digite a porcentagem do reajuste ");
    scanf("%f",&porcenReajuste);

    if (sinal == 1)
    {
    porcenReajuste=porcenReajuste/100;
    reajuste=salarioAtual*porcenReajuste;
    salarioFinal=salarioAtual+reajuste;

    printf("O salario final e de R$%f",salarioFinal);
    return 0;
    }
    if (sinal == 2)
    {
    porcenReajuste=porcenReajuste/100;
    reajuste=salarioAtual*porcenReajuste;
    salarioFinal=salarioAtual-reajuste;

    printf("O salario final e de R$%f",salarioFinal);
    return 0;
    }
    
    
    


}
