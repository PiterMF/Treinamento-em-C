#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

int menu;
printf("Olá, caro usuário!\n");
printf("1 - Cadastrar produto\n");
printf("2 - Listar produto\n");
printf("3 - Sair do sistema\n");
scanf("%menu", &menu);

switch (menu){
	case 1: 
		printf("\nProduto Cadastrado\n");
		break;
	case 2: 
		printf("\nLista de produtos cadastrados...\n");
		break;
	case 3: 
		printf("\nAté a próxima!\n");
		return 0;
		break;
	default:
		printf("\nOpção inválida!!");
		break;
}
printf("Sistema de cadastros finalizado");


return 0;
}

