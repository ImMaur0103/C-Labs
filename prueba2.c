#include <stdio.h>

int main(void){
	int ejemplo1 = 20;

	char ejemplo2 = 'A';

	float ejemplo3 = 100;

	ejemplo1 += ejemplo2 + ejemplo3;

	printf("%d\n", ejemplo1);


//**********************************************

	int i = 15, j = 22;

	int log = i & j;// el & crea una comparacion en binario resultado de un and entonces el numero correspondiente al comparar 01111 y 10110 es el 00110(6 decimal)

	printf("%d\n", log);

//**********************************************

	int k = 15;

	int prueba3 = ~k;

	printf("%i\n", prueba3);


//**********************************************

	int l = 15;

	int prueba4 = l;

	prueba4  <<= 1;
	
	printf("%i\n", prueba4);

	return 0;
}

