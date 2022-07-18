#include <bits/stdc++.h> //Essa bibliotéca tem quase tudo!! stdio.h + math.h + locale.h + strcomp.h tudo tuddo tudo, OBRIGADO USP!!!!!

int main(){
//EXERCÍCIO DISTÂNCIA ENTRE CIDADES
	setlocale (LC_ALL, "portuguese");
	/*int tam;
	printf("Quantas cidades quer verificar?\n");
	scanf("%d", &tam);*/
	
	int M[5][5], i, j;
	
	printf("Digite a distância entre as cidades:\n");
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i==j){
				M[i][j]=0;
			}else if(i<j){
				printf("\n\nInsira a distância entre a cidade %d e %d: ", i+1, j+1);			
				scanf("%d", &M[i][j]);	
			}
			printf(" %d", M[i][j]);
		}
	}
	
	
	
	return 0;
}

