#include <stdio.h>

int main(void){
	int i,j;

	i = 4;
	j = 2 * i++;
	i = 2 * j--	;
	printf(" %d \n", i); 
	printf(" %d \n", j);

	//Prueba de deivicion entre cero
	puts("***************************");
	float x, y;
	
	x = 1;
	y = 0.0;


	++y;
	y = y;
	+y;
	printf(" %f \n", y);
 
	return 0;
}
