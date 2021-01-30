#include <stdio.h>

int main()
{
	puts("Ingrese un numero");

	int Numero;
	int Contador = 0;
	
	scanf("%d", &Numero);

	do{
		printf("*#");
		for(int i = 0; i < Contador; i++){
			printf("*#");
		}
		Contador++;
		printf("\n");
	}while(Contador < Numero);

	return 0;
}
