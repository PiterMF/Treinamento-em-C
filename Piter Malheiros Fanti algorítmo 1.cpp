#include <stdio.h>
#include <locale.h>

int main(){

	//Algorítmo 1
	setlocale (LC_ALL, "portuguese");
	char op = 's';
	int c=0, c100=0, mais100=0, n;
	
	while(op=='s'|| op=='S'){//Verifica se o programa deve continuar ou não
		printf("Digite um número: ");
		scanf("%d", &n);//Pede ao usuário um número
		c++;
		if(n>100){
			mais100++;//Adiciona ao contador se o número for maior que 100
		}
		if(n==100){
			c100++;//Adiciona ao contador se o número for igual a 100
		}
		printf("Pressione s para continuar ou n para sair: ");
		scanf(" %c", &op);//Condição para continuar o programa e repetir os comandos.
		
	}printf("\nO total de números digitados foi: %d", c);
	printf("\nO total de números maiores que 100 digitados foi: %d", mais100);
	printf("\nO total de números iguais a 100 digitados foi: %d", c100);
	
	
	


return 0;
}

