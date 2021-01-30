#include <stdio.h>
#include <stdbool.h>
/**********************
Hello word V.1
Creador: Mauricio Lopez, 2012
**********************/
int main(void){
	printf("Hello Word\n");
	
	int x, y;
	x = 10;
	y = 10;

	bool hola;
		
	hola =  (x == y);
	if(hola){
		puts(" ");
	}
	return 0;
}
