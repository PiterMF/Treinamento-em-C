#include <stdio.h>
#include <locale.h>

int main(){

	//Algor�tmo 1
	setlocale (LC_ALL, "portuguese");
	char op = 's';
	int c=0, c100=0, mais100=0, n;
	
	while(op=='s'|| op=='S'){//Verifica se o programa deve continuar ou n�o
		printf("Digite um n�mero: ");
		scanf("%d", &n);//Pede ao usu�rio um n�mero
		c++;
		if(n>100){
			mais100++;//Adiciona ao contador se o n�mero for maior que 100
		}
		if(n==100){
			c100++;//Adiciona ao contador se o n�mero for igual a 100
		}
		printf("Pressione s para continuar ou n para sair: ");
		scanf(" %c", &op);//Condi��o para continuar o programa e repetir os comandos.
		
	}printf("\nO total de n�meros digitados foi: %d", c);
	printf("\nO total de n�meros maiores que 100 digitados foi: %d", mais100);
	printf("\nO total de n�meros iguais a 100 digitados foi: %d", c100);
	
	
	


return 0;
}

