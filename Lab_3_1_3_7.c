#include <stdio.h>

int main(void){
	int Number;
	float NumeroIngresado = 0;

	scanf("%f", &NumeroIngresado);

	Number = (int) NumeroIngresado;

	if(Number >= 1 && Number < 6){
		if(Number < 2){
			printf("Very bad\n");
		}
		else if(Number < 3){
			printf("Bad\n");
		}
		else if(Number < 4){
			printf("Neutral\n");
		}
		else if(Number < 5){
			printf("Good\n");
		}
		else if(Number < 6){
			printf("Very good\n");
		}
		
	} 
	

	return 0;
}
