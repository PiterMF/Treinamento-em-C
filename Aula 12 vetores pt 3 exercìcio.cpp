#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	/*int i, num[10];
	for (i=0; i<=9; i++){
		printf("Digite um número:\n");
		scanf("%d", &num[i]);
	}
	for (i=0; i<=9; i++){
		printf("num[%d] = %d\n", i, num[i]);
	}*/

	int vA[5], vB[5], i;
	
	for(i=0; i<=4; i++){
		printf("Digite um número:\n");
		scanf("%d", &vA[i]);
		vB[i] = vA[i];
	}
	for (i=0; i<=4; i++){
		printf("num[%d]= %d\n", i, vB[i]);
	}
	
	

return 0;
}

