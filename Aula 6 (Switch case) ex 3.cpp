#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
int dd;
printf("Por favor insira um n�mero de 1 a 7:\n");
scanf("%d", &dd);

switch(dd){
	case 1:
		printf("\nSeu dia � DOMINGO!\n");
		break;
	case 2:
		printf("\nSeu dia � SEGUNDA-FEIRA!\n");
		break;
	case 3:
		printf("\nSeu dia � TER�A-FEIRA!\n");
		break;
	case 4:
		printf("\nSeu dia � QUARTA-FEIRA!\n");
		break;
	case 5:
		printf("\nSeu dia � QUINTA-FEIRA!\n");
		break;
	case 6:
		printf("\nSeu dia � SEXTA-FEIRA!\n");
		break;
	case 7:
		printf("\nSeu dia � S�BADO!\n");
		break;
	default:
		printf("Digite um N�mero de 1 a 7 conforme os dias da semana\n");
		break;	
}


return 0;
}

