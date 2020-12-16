#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo;
    printf("Informe o valor do saldo: ");
    scanf("%f",&saldo);
    printf("O saldo corrigido e %f",saldo * 1.02);
 
    return 0;
}
