#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("Informe os valor em graus centigrados\n");
    scanf("%f",&C);

    F=((9*C)+160)/5;
    printf("%f",C ); printf(" graus centigrados em Fahrenheit sao %f",F);
    

    return 0;
}
