#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
char nome[50], plano;
float salario, novosal;
printf("Digite seu nome:\n");
scanf(" %s", &nome);
printf("Agora insira seu salário: R$");
scanf("%f", &salario);
printf("\nAgora selecione o plano de trabalho:\nA - Base\nB - Intermediário\nC - Advançed-o\n\n");
scanf(" %c", &plano);

switch (plano){
	case 'A':
	case 'a':
		novosal = salario*1.1;
		printf("\n%s, seu novo salário será de R$%.2f\n", nome, novosal);
		break;
	case 'B':
	case 'b':
		novosal = salario*1.15;
		printf("\n%s, seu novo salário será de R$%.2f\n", nome, novosal);
		break;
	case 'C':
	case 'c':
		novosal = salario*1.2;
		printf("\n%s, seu novo salário será de R$%.2f\n", nome, novosal);
		break;
	default:
		printf("\nPlano inválido!\n");
		break;
}



return 0;
}

