#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	int A[100][100], i, j;
	printf("\t--MATRIZ 100X100--\n");
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			A[i][j]=j;
			printf(" %d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\t--MATRIZ 100X100 2--\n");
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			if(A[i][j]%2==0){
				A[i][j]= 0;
			}else{
				A[i][j]= -1;
			}
			printf(" %d", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}

