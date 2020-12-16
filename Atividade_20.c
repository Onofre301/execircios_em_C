#include <stdio.h>
#include <stdlib.h>

int main ()
{

int reais;
float conversao;

printf("Insira o valor do produto em reais: \n");
scanf("%d", & reais);

conversao = reais * 5.20;

printf("O valor do produto em dolares e: \n%.2f", conversao);

return 0;

}