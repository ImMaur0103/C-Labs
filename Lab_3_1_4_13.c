#include <stdio.h>

int main(){
	int Numero1, Numero2;

	do{
		scanf("%d", &Numero1);
		scanf("%d", &Numero2);

		int suma = Numero1 + Numero2;
		
		printf("sum: %d\n", suma);
	}while(Numero1 != 0 && Numero2 != 0);
	if(Numero1 == 99 && Numero2 == 0){
		printf("Finish.\n");
	}

	return 0;
}
