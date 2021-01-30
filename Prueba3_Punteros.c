#include <stdio.h>
#include <stddef.h> // Esta libreria permite la incorporacion de la palabra recervada NULL

int main(void){
	int *Puntero = NULL;
	int Array[5];
	int Variable;
	Variable = sizeof Array;
	printf("%d", Variable);

	for(int i = 0; i < 5; i++){
		scanf("%i", &Array[i]);
		Array[i] += 10 * i;
		Array[i] *= 5;
	}
	

	for(int i = 0; i < sizeof Array; i++){
		Puntero =  &Array[i];
		printf("\n%d", Puntero);
		printf("\n%d", Array[i]);
	}

	Puntero = &Array;
	printf("\n\n%d\n", Puntero);

	Puntero = &Array[0];
	for(int i = 0; i < 5; i++){
		printf("\n%d", *Puntero);
		printf("\n%d", Array[i]);
		Puntero++;
	}
	printf("\n");
	return 0;
}
