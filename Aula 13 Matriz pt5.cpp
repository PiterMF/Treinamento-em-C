#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	int A[3][10], i, j;
	int B[5][10], o, u;

	printf("\tMATRIZ A\n");	
	for(i=0;i<3;i++){
		printf("\t");
		for(j=0;j<10;j++){
			A[i][j]= j;
			printf(" %d", A[i][j]);
			}
			printf("\n");
		}
	
	printf("\n\n\tMATRIZ B\n");	
	for(i=0;i<5;i++){
		printf("\t");
		for(j=0;j<10;j++){
			B[i][j]= j*j;
			printf(" %d", B[i][j]);
			}
			printf("\n");
		}
	return 0;
}

