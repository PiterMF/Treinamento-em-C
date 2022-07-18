#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
char estciv;
int anos;
printf("Digite a opção do seu relacionamento atual:\n\n");
printf("S - Solteiro(a)\nC - Casado(a)\nU - União Estável\nA - Relacionamento Aberto\nO - Outros\n");
scanf(" %c", &estciv);

switch(estciv){
	case 's':
	case 'S':
		printf("Tem muito peixe nesse mar!\nSe joga no mundo!\n");
		break;
	case 'c':
	case 'C':
		printf("Felicidades!\nDigite quantos anos de casados que vocês têm juntos:\n");
		scanf("%d", &anos);
		printf("\n%d anos?! Espero que dure muitos anos ainda!!!", anos);
		break;
	case 'u':
	case 'U':
		printf("Felicidades!\nDigite há quantos anos vocês estão juntos:\n");
		scanf("%d", &anos);
		printf("\n%d anos?! Espero que dure muitos anos ainda!!!", anos);
		break;
	case 'a':
	case 'A':
		printf("Felicidades!\nDigite há quantos anos vocês estão juntos:\n");
		scanf("%d", &anos);
		printf("\n%d anos?! Espero que dure muitos anos ainda!!!", anos);
		break;
	case 'o':
	case 'O':
		printf("Que legal, espero que esteja feliz, tudo de bom pra você(s)");
		break;
	default:
		printf("Poxa ;-; Você não inseriu uma opção válida... ;-;");
}


return 0;
}

