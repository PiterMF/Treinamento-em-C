#include <stdio.h>
#include <locale.h>

int main(){

/*Matriz de identidade, a diagonal é = 1 e os demais termos são 0, ou seja, quando i=j, o valor = 1
ex:		0	1
	0	1	0
	1	0	1	*/


	setlocale (LC_ALL, "portuguese");
	int M[5][5], i, j;
	printf("Digite os valores da matriz %d x %d", 5,5);
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j){
				M[i][j]= 1;
			}else{
				M[i][j]= 0;
			}
		}
	}
	printf("\n----------Matriz identidade----------\n");
	for(i=0;i<5;i++){
		printf("\t");
		for(j=0;j<5;j++){
			printf(" %d ", M[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

