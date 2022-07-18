#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	int M[4][4], i, j, cdez=0;
	printf("Digite os valores da matriz %d x %d\n", 4,4);
	
	for(i=0; i<4; i++){
		
		for(j=0;j<4;j++){
			printf("M[%d][%d]= ", i, j);
			scanf("%d", &M[i][j]);
			if(M[i][j]>=10){
				cdez++;				
			}
		}
	}
	printf("A matriz possui %d números maiores ou iguais a 10\n", cdez);
	printf("\n\nA soma da matriz ficou assim:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}

