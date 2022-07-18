#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	//Exerício 11 Lista de repetição (Fibonacci):
	int n, i, ant, atual, prox;
	printf("Digite quantos números terá a sequência de Fibonacci:\n");
	scanf("%d", &n);
	ant = 0;
	atual = 1;
	printf("\n%d %d ", ant, atual);
	
	for(i=0; i<n-2; i++){ //i = n-2 pois já iniciamos a sequência com o ant=0 e o atual=1 que aparecem na tela.
		prox = ant + atual;
		printf("%d ", prox);
		ant = atual;
		atual = prox;
	}


return 0;
}

