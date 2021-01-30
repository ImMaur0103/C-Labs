#include <stdio.h>

int main(){
	char IP[15], IP1[4], IP2[4], IP3[4], IP4[4];
	int IPint1, IPint2, IPint3, IPint4;	

	puts("Ingrese la IP");
	scanf("%s", IP);

	for(int i = 0; i < 15; i++){
		if(IP[i] !='.'){
			if(IP[i] > 47 && IP[i] < 58){
				switch (i){
					case 0:	IP1[i] = IP[i];
					break;
					case 1:	IP1[i] = IP[i];
					break;
					case 2:	IP1[i] = IP[i];
						IP1[3] = '\0';
					break;
					case 4:	IP2[0] = IP[i];
					break;
					case 5:	IP2[1] = IP[i];
					break;
					case 6:	IP2[2] = IP[i];
						IP2[3] = '\0';
					break;
					case 8:	IP3[0] = IP[i];
					break;
					case 9:	IP3[1] = IP[i];
					break;
					case 10: IP3[2] = IP[i];
						 IP3[3] = '\0';
					break;
					case 12: IP4[0] = IP[i];
					break;
					case 13: IP4[1] = IP[i];
					break;
					case 14: IP4[2] = IP[i];
						 IP4[3] = '\0';
					break;
				}
			}
			else{
				break;
			}
		}
	}
	IPint1 = (int) *IP1;
	printf("%d\n", IPint1);
	printf("%d\n", *IP1);

	
	return 0;
}
