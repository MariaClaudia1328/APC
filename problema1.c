/* Algoritmos e programação de computadores
Aluna: Maria Claudia Campos Martins
Matricula: 17/0109968 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome_piloto[21];
	float distancia_km,tempo,velocidade_media;

	printf("Digite o nome do piloto:\n");
	scanf("%[^\n]s", nome_piloto);
	printf("Digite a distancia percorrida:\n");
	scanf("%f",&distancia_km);
	printf("Digite o tempo:\n");
	scanf("%f",&tempo);

	velocidade_media = distancia_km/tempo;
	
	printf("A velocidade media de %s foi de %.2f km/h\n", nome_piloto, velocidade_media );
	return 0;
}