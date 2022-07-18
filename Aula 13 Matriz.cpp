#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	//Extruturas homogêneas - matriz
	int M[2][2], i, j;
	printf("Digite os valores da matriz %d x %d:\n", 2, 2);
	
	for(i=0;i<2;i++){//for que perdcorre as linhas (só vai mudar de linha, quando as colunas acabarem)
		for(j=0;j<2;j++){//for que percorre as colunas
			printf("M[%d][%d]=", i,j);
			scanf("%d%d", &M[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d\t ", M[i][j]);
		}
		printf("\n");
	}
	

return 0;
}

