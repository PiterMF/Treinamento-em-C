#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	//AULA DE SWITCH CASE
	// switch case pode ser apenas int ou char
	
	int n;
	printf("Digite um número inteiro:\n");
	scanf("%d", &n);
	
	switch (n){
		case 9:
			printf("Você digitou nove.\n");
		break;
		case 10:
			printf("Você digitou dez.\n");
		break;
		case 11:
			printf("Você digitou onze.\n");
		break;
		default:	
			printf("Você não digitou nove, nem dez, nem onze.\n");
		break;
	}
	
	
	
	return 0;
}
