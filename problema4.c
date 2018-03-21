/* Algoritmos e programação de computadores
Aluna: Maria Claudia Campos Martins
Matricula: 17/0109968 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c,digito_verificador;

	printf("Numero da conta corrente:");
	scanf("%d %d %d",&a,&b,&c);
	a *= 2;
	b *= 3;
	c *= 4;
	digito_verificador = (((a + b + c)*10)%11);

	printf("O digito verificador eh %d \n",digito_verificador );

	return 0;
}