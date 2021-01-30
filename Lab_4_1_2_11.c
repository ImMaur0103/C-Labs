#include <stdio.h>

int main()
{
	char Abecedario[25];

	for(int i = 0; i < 25; i ++){
		Abecedario[i] = (122 - i);	
	}

	
	for(int i = 0; i < 26; i ++){
		if(i != 25){
			printf("%c\n", Abecedario[i]);
		}
		else {
			puts("Grat");
		}		
	}
	return 0;
}
