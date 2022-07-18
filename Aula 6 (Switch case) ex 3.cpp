#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
int dd;
printf("Por favor insira um número de 1 a 7:\n");
scanf("%d", &dd);

switch(dd){
	case 1:
		printf("\nSeu dia é DOMINGO!\n");
		break;
	case 2:
		printf("\nSeu dia é SEGUNDA-FEIRA!\n");
		break;
	case 3:
		printf("\nSeu dia é TERÇA-FEIRA!\n");
		break;
	case 4:
		printf("\nSeu dia é QUARTA-FEIRA!\n");
		break;
	case 5:
		printf("\nSeu dia é QUINTA-FEIRA!\n");
		break;
	case 6:
		printf("\nSeu dia é SEXTA-FEIRA!\n");
		break;
	case 7:
		printf("\nSeu dia é SÁBADO!\n");
		break;
	default:
		printf("Digite um Número de 1 a 7 conforme os dias da semana\n");
		break;	
}


return 0;
}

