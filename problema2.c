/* Algoritmos e programação de computadores
Aluna: Maria Claudia Campos Martins
Matricula: 17/0109968 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a,b,c;
	double delta,raiz_1,raiz_2;

	printf("Valor de a:\n");
	scanf("%d",&a);
	printf("Valor de b:\n");
	scanf("%d",&b);
	printf("Valor de c:\n");
	scanf("%d",&c);

	delta = ((b*b) - (4*a*c));
	delta = sqrt(delta);
	raiz_1 = (-b + delta)/(2*a);
	raiz_2 = (-b - delta)/(2*a);

	printf("x1 = %.2lf x2 = %.2lf\n",raiz_1,raiz_2);

	return 0;
}