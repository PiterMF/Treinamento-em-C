#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

float preco, novopreco;
	int metpag;
	printf("Digite o pre�o da etiqueta:\n");
	scanf("%f", &preco);
	printf("Digite a forma de pagamento:\n");
	printf("1 - � vista: dinheiro, pix ou d�bito\n");
	printf("2 - � vista: cr�dito\n");
	printf("3 - em 2x no cart�o\n");	
	printf("4 - em 3x no cart�o\n");
	scanf("%d", &metpag);
	
	switch (metpag){
		case 1:
			novopreco = preco*0.9;
			printf("\nPre�o a ser pago - R$%.2f\n", novopreco);
		break;
		case 2:
			novopreco = preco*0.95;
			printf("\nPre�o a ser pago - R$%.2f\n", novopreco);
		break;
		case 3:
			novopreco = preco;
			printf("\nPre�o a ser pago - R$%.2f\n", novopreco);
		case 4:
			novopreco = preco*1.05;
			printf("\nPre�o a ser pago - R$%.2f\n", novopreco);
		break;
		default:
			printf("\nCondi��o Inv�lida!!!\n");
		break;
	}


return 0;
}

