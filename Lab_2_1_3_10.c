#include <stdio.h>
/**************************
Me adelante usando fors
**************************/
int main(){
	char zero = '0';
	
	for(int i = 0; i < 10; i++){
		printf("'%c' - '%c' is: %d\n", (48 + i), zero, (48+i) - zero);
	}

	return 0;
}
