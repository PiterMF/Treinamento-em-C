#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	int M[2][2], i, j, somalinha, somatotal= 0;
	printf("Digite os valores da matriz %d x %d\n", 2,2);
	
	for(i=0; i<2; i++){
		
		somalinha=0;
		for(j=0;j<2;j++){
			printf("M[%d][%d]= ", i, j);
			scanf("%d", &M[i][j]);
			somalinha += M[i][j];
			somatotal += M[i][j];
		}
		printf("A soma da linha %d = %d\n", i, somalinha);
	}
	printf("A soma de toddos os elementos da matriz = %d\n", somatotal);
	printf("\n\nA soma da matriz ficou assim:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
	return 0;
}

