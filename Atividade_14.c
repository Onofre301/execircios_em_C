#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, perimetro, area;

    printf("Digite a base do retangulo \n");
    scanf("%f",&base);  
    printf("Digite a altura do retangulo \n");
    scanf("%f",&altura);

    perimetro=base+altura;
    area=base*altura;

    printf("O perimetro e igual a %f\n",perimetro);
    printf("A area e igual a %f\n",area);

    return 0;
}
