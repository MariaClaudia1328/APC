#include <stdio.h>

int main(){
	int i;
	double S1=1,numerador=0,denominador=1;
	for(i=1	;i<=19;i++){
		numerador = ((i*2)+1);
		denominador *= 2;
		S1 += numerador/denominador;	
	}
	printf("%.2lf\n", S1);
	return 0;
}