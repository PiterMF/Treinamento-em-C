#include <stdio.h>
#include <locale.h>

int main(){

	// Ex 12 lista repetição
	setlocale (LC_ALL, "portuguese");
	int i, n;
	float soma;
	
	printf("Quantos números terá a sequência?\n");
	scanf("%d", &n);//pergunta para o usuário quantos termos terá a série.
	
	for(i=1; i<=n; i++){//começa por 1 por conta da série
		soma = soma + 1.0/i; //acumula na própria soma o valor do termo e a soma anterior
		//printf("Soma parcial = %.2f\n", soma);
	}
	
	printf("Soma final = %.2f\n", soma);


return 0;
}

