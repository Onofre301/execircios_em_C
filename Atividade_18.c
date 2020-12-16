#include <stdio.h>
#include <stdlib.h>



void main()
{
    float Tempo, VelMedia, Distancia, Consumo;
    printf("Informe o tempo gasto na viagem em horas: ");
	scanf("%f",&Tempo);
 
	printf("\nInforme a velocidade media em KM/H: ");
	scanf("%f",&VelMedia);
 
	Distancia = Tempo * VelMedia;
	Consumo = Distancia / 12;
 
	printf("A distancia percorida foi de: %f KM", (Distancia));
	printf("\nO consumo foi de: %f litros", (Consumo));
 
	
    
}
