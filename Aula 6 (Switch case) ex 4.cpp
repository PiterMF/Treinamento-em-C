#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
char nome[50], plano;
float salario, novosal;
printf("Digite seu nome:\n");
scanf(" %s", &nome);
printf("Agora insira seu sal�rio: R$");
scanf("%f", &salario);
printf("\nAgora selecione o plano de trabalho:\nA - Base\nB - Intermedi�rio\nC - Advan�ed-o\n\n");
scanf(" %c", &plano);

switch (plano){
	case 'A':
	case 'a':
		novosal = salario*1.1;
		printf("\n%s, seu novo sal�rio ser� de R$%.2f\n", nome, novosal);
		break;
	case 'B':
	case 'b':
		novosal = salario*1.15;
		printf("\n%s, seu novo sal�rio ser� de R$%.2f\n", nome, novosal);
		break;
	case 'C':
	case 'c':
		novosal = salario*1.2;
		printf("\n%s, seu novo sal�rio ser� de R$%.2f\n", nome, novosal);
		break;
	default:
		printf("\nPlano inv�lido!\n");
		break;
}



return 0;
}

