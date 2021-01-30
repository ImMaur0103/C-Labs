#include <stdio.h>

int main(){
	int n = 8;
	
	if(n < 0){
		printf("The absolute value of %d is %d\n", n, n * -1);
	}
	else{
		printf("The absolute value of %d is %d\n", n, n);
	}
	printf("The value of n is %d\n", n);
	
	return 0;
}
