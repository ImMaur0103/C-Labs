#include <stdio.h>

int main(){
	long part1, part2, part3, part4;
	long  SumaTotal;

	puts("ingrese la primera parte de la Ip: ");
	scanf("%li", &part1);


	puts("ingrese la segunda parte de la Ip: ");
	scanf("%li", &part2);


	puts("ingrese la tercera parte de la Ip: ");
	scanf("%li", &part3);


	puts("ingrese la cuarta parte de la Ip: ");
	scanf("%li", &part4);

	if(part1 > 256){
		puts("IP invalida");
	}
	else if(part1 < 0){
		puts("IP invalida");
	}
	else if(part2 > 256){
		puts("IP invalida");
	}
	else if(part2 < 0){
		puts("IP invalida");
	}
	else if(part3 > 256){
		puts("IP invalida");
	}
	else if(part3 < 0){
		puts("IP invalida");
	}
	else if(part4 > 256){
		puts("IP invalida");
	}
	else if(part4 < 0){
		puts("IP invalida");
	}
	else{
		SumaTotal = part1 * 256 * 256 * 256;
		SumaTotal += part2 * 256 * 256;
		SumaTotal += part3 * 256;
		SumaTotal += part4;
		
		printf("Human-readable IP address is: %li.%li.%li.%li\n", part1, part2, part3, part4);

		printf("IP address as a 32-bit number: %li\n", SumaTotal);
	}
	
	return 0;
}
