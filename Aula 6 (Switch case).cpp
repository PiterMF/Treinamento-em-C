#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	//AULA DE SWITCH CASE
	// switch case pode ser apenas int ou char
	
	int n;
	printf("Digite um n�mero inteiro:\n");
	scanf("%d", &n);
	
	switch (n){
		case 9:
			printf("Voc� digitou nove.\n");
		break;
		case 10:
			printf("Voc� digitou dez.\n");
		break;
		case 11:
			printf("Voc� digitou onze.\n");
		break;
		default:	
			printf("Voc� n�o digitou nove, nem dez, nem onze.\n");
		break;
	}
	
	
	
	return 0;
}
