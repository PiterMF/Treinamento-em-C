#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
char estciv;
int anos;
printf("Digite a op��o do seu relacionamento atual:\n\n");
printf("S - Solteiro(a)\nC - Casado(a)\nU - Uni�o Est�vel\nA - Relacionamento Aberto\nO - Outros\n");
scanf(" %c", &estciv);

switch(estciv){
	case 's':
	case 'S':
		printf("Tem muito peixe nesse mar!\nSe joga no mundo!\n");
		break;
	case 'c':
	case 'C':
		printf("Felicidades!\nDigite quantos anos de casados que voc�s t�m juntos:\n");
		scanf("%d", &anos);
		printf("\n%d anos?! Espero que dure muitos anos ainda!!!", anos);
		break;
	case 'u':
	case 'U':
		printf("Felicidades!\nDigite h� quantos anos voc�s est�o juntos:\n");
		scanf("%d", &anos);
		printf("\n%d anos?! Espero que dure muitos anos ainda!!!", anos);
		break;
	case 'a':
	case 'A':
		printf("Felicidades!\nDigite h� quantos anos voc�s est�o juntos:\n");
		scanf("%d", &anos);
		printf("\n%d anos?! Espero que dure muitos anos ainda!!!", anos);
		break;
	case 'o':
	case 'O':
		printf("Que legal, espero que esteja feliz, tudo de bom pra voc�(s)");
		break;
	default:
		printf("Poxa ;-; Voc� n�o inseriu uma op��o v�lida... ;-;");
}


return 0;
}

