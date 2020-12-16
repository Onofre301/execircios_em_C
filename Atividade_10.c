#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;
    float media, soma;

    printf("Digite o primerio numero \n");
    scanf("%f",&n1);

    printf("Digite o segundo numero \n");
    scanf("%f",&n2);

    printf("Digite o terceiro numero \n");
    scanf("%f",&n3);

    soma=n1+n2+n3;
    media=soma/3;

    printf("A media aritmetica dos tres numeros e igual: %f",media);
    return 0;
}
