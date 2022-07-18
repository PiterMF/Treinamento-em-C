#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
int mm;
printf("Por favor insira um número de 1 a 12:\n");
scanf("%d", &mm);

switch(mm){
	case 1:
		printf("Seu mês é Janeiro!\n");
		break;
	case 2:
		printf("Seu mês é Fevereiro!\n");
		break;
	case 3:
		printf("Seu mês é Março!\n");
		break;
	case 4:
		printf("Seu mês é Abril!\n");
		break;
	case 5:
		printf("Seu mês é Maio!\n");
		break;
	case 6:
		printf("Seu mês é Junho!\n");
		break;
	case 7:
		printf("Seu mês é Julho!\n");
		break;
	case 8:
		printf("Seu mês é Agosto!\n");
		break;
	case 9:
		printf("Seu mês é Setembro!\n");
		break;
	case 10:
		printf("Seu mês é Outubro!\n");
		break;
	case 11:
		printf("Seu mês é Novembro!\n");
		break;
	case 12:
		printf("Seu mês é Dezembro!\n");
		break;
	default:
		printf("Digite um Número de 1 a 12 conforme os meses do ano\n");
		break;	
}


return 0;
}

