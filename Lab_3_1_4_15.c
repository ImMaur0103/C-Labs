#include <stdio.h>

int main()
{
	
	puts("Ingrese un numero");

	int Numero;
	int Contador = 1;
	
	scanf("%d", &Numero);
	printf("\n\n\n");
		
	for(int i = 1; i <= Numero; i++){
		printf("*");
		while(Contador < i){
			printf(" ");
			Contador++;
		}
		Contador = 1;
		printf("*\n");
	}
	for(int i = Numero; i >= 1; i--){
		printf("*");
		while(Contador < i){
			printf(" ");
			Contador++;
		}
		Contador = 1;
		printf("*\n");
	}
	return 0;
}
