#include <stdio.h>

int main()
{
	/* your code */
	puts("Ingrese un numero correspondiente a un mes y se le retornara el mes en ingles");
	int respuesta;
	scanf("%d", &respuesta);

	


	switch(respuesta){
		case 1: puts("There are 0 days before the given month");	break;
		case 2: puts("There are 31 days before the given month");	break;
		case 3: puts("There are 60 days before the given month"); 	break;
		case 4: puts("There are 91 days before the given month"); 	break;
		case 5: puts("There are 121 days before the given month"); 	break;
		case 6: puts("There are 152 days before the given month"); 	break;
		case 7: puts("There are 182 days before the given month"); 	break;
		case 8: puts("There are 213 days before the given month"); 	break;
		case 9: puts("There are 244 days before the given month"); 	break;
		case 10: puts("There are 274 days before the given month"); 	break;
		case 11: puts("There are 305 days before the given month"); 	break;
		case 12: puts("There are 335 days before the given month"); 	break;
		default: puts("Error: no such month in my calendar.");
	} 
	
	return 0;
}
