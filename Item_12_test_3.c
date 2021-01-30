#include <stdio.h>

int main(){
	int i = 0, j = 1, k;

	k = i << j + j;
	k <<= i;
	printf("%d\n", k);
	return 0;
}
