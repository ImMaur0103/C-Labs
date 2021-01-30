#include <stdio.h>

int main(void){
	/***********************************
	Laboratorio de Fibonachi
	***********************************/
	int Fibonassi[10];
	Fibonassi[0] = 1;
	Fibonassi[1] = 1;
		
	for(int i = 0; i < 10; i++){
		if(i >= 2){
			Fibonassi[i] = Fibonassi[i - 1] + Fibonassi[i - 2];
		}
		printf("sucesión %i: %d\n", i+1, Fibonassi[i]);

	}
	puts("\nsucesión de numeros impares de Fibonassi\n");
	for(int i = 0; i < 10; (i += 2)){
		printf("sucesión %i: %d\n", i+1, Fibonassi[i]);

	}
	puts("\nsucesión de numeros pares de Fibonassi\n");
	for(int i = 1; i < 10; (i += 2)){
		printf("sucesión %i: %d\n", i+1, Fibonassi[i]);

	}
	return 0;
}
