#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

float preco, novopreco;
	int metpag;
	printf("Digite o preço da etiqueta:\n");
	scanf("%f", &preco);
	printf("Digite a forma de pagamento:\n");
	printf("1 - à vista: dinheiro, pix ou débito\n");
	printf("2 - à vista: crédito\n");
	printf("3 - em 2x no cartão\n");	
	printf("4 - em 3x no cartão\n");
	scanf("%d", &metpag);
	
	switch (metpag){
		case 1:
			novopreco = preco*0.9;
			printf("\nPreço a ser pago - R$%.2f\n", novopreco);
		break;
		case 2:
			novopreco = preco*0.95;
			printf("\nPreço a ser pago - R$%.2f\n", novopreco);
		break;
		case 3:
			novopreco = preco;
			printf("\nPreço a ser pago - R$%.2f\n", novopreco);
		case 4:
			novopreco = preco*1.05;
			printf("\nPreço a ser pago - R$%.2f\n", novopreco);
		break;
		default:
			printf("\nCondição Inválida!!!\n");
		break;
	}


return 0;
}

