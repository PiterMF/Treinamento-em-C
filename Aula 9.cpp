#include <stdio.h>
#include <locale.h>

int main(){

	// Ex 12 lista repeti��o
	setlocale (LC_ALL, "portuguese");
	int i, n;
	float soma;
	
	printf("Quantos n�meros ter� a sequ�ncia?\n");
	scanf("%d", &n);//pergunta para o usu�rio quantos termos ter� a s�rie.
	
	for(i=1; i<=n; i++){//come�a por 1 por conta da s�rie
		soma = soma + 1.0/i; //acumula na pr�pria soma o valor do termo e a soma anterior
		//printf("Soma parcial = %.2f\n", soma);
	}
	
	printf("Soma final = %.2f\n", soma);


return 0;
}

