#include <stdio.h>
/*******************************
Este es el laboratorio que trata sobre la creacion de un bubble sort
metodos de ordenamiento y eficiencia
*******************************/
int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	int Lenght = 10;
	int cambio = 0; 
	int i = 0;
	/* your code */
	do{	
		i = 0;
		cambio = 0;
		while(!cambio && i < (Lenght - 1)){
			if(numbers[i] > numbers[i +1]){
				cambio = 1;
			}
			else{
				if(cambio){
					cambio = 0;
					break;
				}
			}
			if(cambio){
				float aux = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = aux;
			}
			i++;
		}
		for(int j = 0; j < Lenght; j++){
			if(j != Lenght-1){
				printf("%.2f\t", numbers[j]);
			}else{
				printf("%.2f\n", numbers[j]);
			}
		}
	}while(cambio  && i != (Lenght - 1));
	return 0;
}
