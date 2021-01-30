#include <stdio.h>

int main()
{
		puts("");
		/***************************************************
		Laboratorio C++ institude modulo 1.1.3.9
		
		#include <stdio.h>

		int main()
		{
			printf("The value of seven is: %d \n", 0087);
			printf("The value of eight is: %d \n", (8000x - 7992x)/x);

			return 0;
		}
		Resolucion abajo
		****************************************************/
//Inicio Resolucion    	
	int x;
	x = 1;
    
	printf("The value of seven is: %d \n", 007);
	printf("The value of eight is: %d \n", (8000*x - 7992*x)/x);
//Fin Resolucion
	
	printf("****************Fin Ejercicio 1.1.3.9*********************** \n\n" );

		/***************************************************
		Laboratorio C++ institude modulo 1.1.3.10
		
		#include <stdio.h>

		int main()
		{
			printf("The value of nine is: %d \n", 01x);
			printf("The value of ten is: %d \n", 0x2);
			return 0;
		}
		Resolucion abajo
		****************************************************/
//Inicio Resolucion    	
	x = 8;
	printf("The value of nine is: %d \n", 01 + x);
	printf("The value of ten is: %d \n", 0xA);
//Fin Resolucion

	printf("****************Fin Ejercicio 1.1.3.10*********************** \n\n" );

		/***************************************************
		Laboratorio C++ institude modulo 1.1.3.11
		
		#include <stdio.h>

		int main()
		{
			printf("The value of twenty-one is: %d \n", 0015);
			printf("The value of twenty-two is: %d \n", 0x1y);
			printf("The value of sixty-two is: %d \n", 0x3G);
			printf("The value of seventy-four is: %d \n", 0x44);

			return 0;
		}
		Resolucion abajo
		****************************************************/
//Inicio Resolucion    	
	printf("The value of twenty-one is: %d \n", 0x15);// se cambia el cero por una x.Hay error en la base usada
	printf("The value of twenty-two is: %d \n", 0x16);// hay error en las letras ya que no existe el numero y1 en la base 16
	printf("The value of sixty-two is: %d \n", 0x3E);// hay error en las letras ya que no existe el numero y1 en la base 16 el numero deseado era el 3E
	printf("The value of seventy-four is: %d \n", 0x48);// Aca se cambia 44 por 48(Error logico) 
//Fin Resolucion

	printf("****************Fin Ejercicio 1.1.3.11*********************** \n\n" );

	return 0;

}
