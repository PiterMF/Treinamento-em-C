#include <stdio.h>
#include <locale.h>


int main(){

setlocale (LC_ALL, "portuguese");
int i, n_cand, votos, win=0, n_win=1;
char nome[50];
printf("Por favor, insira o n�mero de candidatos � Embaixador da Engenharia de Computa��o: ");
scanf("%d", &n_cand); 

for (i=1; i<=n_cand; i++){
	printf("\nPor favor insira o n�mero de votos do %d� candidato: ", i);
	scanf("%d", &votos);
		if (votos>win){
			win=votos;
			n_win=i;
			printf("\nAtualmente esse � o candidato de maior voto. Insira o nome dele(dela): ");
			scanf(" %s", &nome);
		}
	
}printf("\n\nE o vencedor � o %d� candidato: %s\n", n_win, nome);




return 0;
}

