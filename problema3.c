/* Algoritmos e programação de computadores
Aluna: Maria Claudia Campos Martins
Matricula: 17/0109968 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	double custo_consumidor, custo_fabrica, distribuidor, impostos;

	printf("Valor do custo de fabrica:");
	scanf("%lf",&custo_fabrica);

	distribuidor = custo_fabrica*0.28;
	impostos = custo_fabrica*0.45;
	custo_consumidor = custo_fabrica + distribuidor + impostos;

	printf("Custo ao consumidor: %.3lf\n", custo_consumidor);

	return 0;
}