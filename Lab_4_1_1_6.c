#include <stdio.h>

int main()
{
	/* your code */
	puts("Ingrese un numero correspondiente a un mes y se le retornara el mes en ingles");
	int respuesta;
	scanf("%d", &respuesta);

	switch(respuesta){
		case 1: puts("Janaury");	break;
		case 2: puts("February");	break;
		case 3: puts("March"); 		break;
		case 4: puts("April"); 		break;
		case 5: puts("May"); 		break;
		case 6: puts("June"); 		break;
		case 7: puts("July"); 		break;
		case 8: puts("August"); 	break;
		case 9: puts("September"); 	break;
		case 10: puts("October"); 	break;
		case 11: puts("November"); 	break;
		case 12: puts("December"); 	break;
		default: puts("Error: no such month in my calendar.");
	} 
	
	return 0;
}
