#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
int mm;
printf("Por favor insira um n�mero de 1 a 12:\n");
scanf("%d", &mm);

switch(mm){
	case 1:
		printf("Seu m�s � Janeiro!\n");
		break;
	case 2:
		printf("Seu m�s � Fevereiro!\n");
		break;
	case 3:
		printf("Seu m�s � Mar�o!\n");
		break;
	case 4:
		printf("Seu m�s � Abril!\n");
		break;
	case 5:
		printf("Seu m�s � Maio!\n");
		break;
	case 6:
		printf("Seu m�s � Junho!\n");
		break;
	case 7:
		printf("Seu m�s � Julho!\n");
		break;
	case 8:
		printf("Seu m�s � Agosto!\n");
		break;
	case 9:
		printf("Seu m�s � Setembro!\n");
		break;
	case 10:
		printf("Seu m�s � Outubro!\n");
		break;
	case 11:
		printf("Seu m�s � Novembro!\n");
		break;
	case 12:
		printf("Seu m�s � Dezembro!\n");
		break;
	default:
		printf("Digite um N�mero de 1 a 12 conforme os meses do ano\n");
		break;	
}


return 0;
}

