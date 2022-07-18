#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
int prod, quant;
float preco;
printf("Digite código do produto que deseja comprar:\n");
printf("\n100 - Cachorro Quente - R$1,20 / un\n101 - Bauru Símples - R$1,30 / un\n");
printf("102 - Bauru com Ovo - R$1,50 / un\n103 - Hambúrguer - R$1,20\n104 - Cheeseburguer - R$1,30 / un\n105 - Refrigerante - R$1,00 / un\n");
scanf("%d", &prod);

switch (prod){
	case 100:
		printf("\nDigite a quantidade desejada: ");
		scanf("%d", &quant);
		preco = 1.2*quant;
	break;
	case 101:
		printf("\nDigite a quantidade desejada: ");
		scanf("%d", &quant);
		preco = 1.3*quant;
	break;		
	case 102:
		printf("\nDigite a quantidade desejada: ");
		scanf("%d", &quant);
		preco = 1.5*quant;
	break;
	case 103:
		printf("\nDigite a quantidade desejada: ");
		scanf("%d", &quant);
		preco = 1.2*quant;
	break;
		case 104:
		printf("\nDigite a quantidade desejada: ");
		scanf("%d", &quant);
		preco = 1.3*quant;
	break;
		case 105:
		printf("\nDigite a quantidade desejada: ");
		scanf("%d", &quant);
		preco = quant;
	break;
	default:
		printf("Opção inválida!!");
		return 0;
		break;
}
printf("\nO preço a pagar é: %.2f\n", preco);

return 0;
}

