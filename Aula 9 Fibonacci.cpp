#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	//Exer�cio 11 Lista de repeti��o (Fibonacci):
	int n, i, ant, atual, prox;
	printf("Digite quantos n�meros ter� a sequ�ncia de Fibonacci:\n");
	scanf("%d", &n);
	ant = 0;
	atual = 1;
	printf("\n%d %d ", ant, atual);
	
	for(i=0; i<n-2; i++){ //i = n-2 pois j� iniciamos a sequ�ncia com o ant=0 e o atual=1 que aparecem na tela.
		prox = ant + atual;
		printf("%d ", prox);
		ant = atual;
		atual = prox;
	}


return 0;
}

