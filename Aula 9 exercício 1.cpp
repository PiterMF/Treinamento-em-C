#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	int op=1, num, c=0, cinco=0; // os n�meros 0 come�am com esse valor para evitar erros de contagem.
	
	while(op!= -1){
		
		printf("Digite um n�mero: ");
		scanf("%d", &num);//usu�rio fornecer� o n�mero.
		if(num==5){
			cinco++;//para cada vez que for digitado o n�mero 5, o contador 'cinco' ser� acrescido em 1.
		}
		printf("Digite qualquer n�mero para continuar ou -1 para sair: ");
		scanf("%d", &op); //Qualquer n�mero que n�o seja -1 continua o loop.
		c++; // contador c aumentando em 1 para cada loop para mostrar quantos n�meros foram digitados;
	}
	printf("\nForam digitados %d n�meros e desses, %d foram '5'\n\n", c, cinco);


return 0;
}

