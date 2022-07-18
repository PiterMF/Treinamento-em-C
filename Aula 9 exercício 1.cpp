#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	int op=1, num, c=0, cinco=0; // os números 0 começam com esse valor para evitar erros de contagem.
	
	while(op!= -1){
		
		printf("Digite um número: ");
		scanf("%d", &num);//usuário fornecerá o número.
		if(num==5){
			cinco++;//para cada vez que for digitado o número 5, o contador 'cinco' será acrescido em 1.
		}
		printf("Digite qualquer número para continuar ou -1 para sair: ");
		scanf("%d", &op); //Qualquer número que não seja -1 continua o loop.
		c++; // contador c aumentando em 1 para cada loop para mostrar quantos números foram digitados;
	}
	printf("\nForam digitados %d números e desses, %d foram '5'\n\n", c, cinco);


return 0;
}

