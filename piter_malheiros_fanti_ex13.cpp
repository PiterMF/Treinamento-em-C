#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
int cod;
char nome[50];

printf("Ol�, usu�rio! Bem vindo(a) ao cadastro de produto.\nSegue os c�digos de produtos:\n\n1 - Alimentos\n2 - Bebidas\n");
printf("3 - Roupas\n4 - Higiene Pessoal\n5 - Limpeza\n6 - Utens�lios Dom�sticos\n\nPor gentileza, insira o nome do seu produto:\n");
scanf(" %s", &nome);
printf("Agora insira o c�digo do seu produto:\n");
scanf("%d", &cod);

switch (cod){
	case 1:
		printf("\nO produto '%s' pertence ao grupo Alimentos!\n", nome);
	break;
	case 2:
		printf("\nO produto '%s' pertence ao grupo Bebidas!\n", nome);
	break;
	case 3:
		printf("\nO produto '%s' pertence ao grupo Roupas!\n", nome);
	break;
	case 4:
		printf("\nO produto '%s' pertence ao grupo Higiene Pessoal!\n", nome);
	break;
	case 5:
		printf("\nO produto '%s' pertence ao grupo Limpeza!\n", nome);
	break;
	case 6:
		printf("\nO produto '%s' pertence ao grupo Utens�lios Dom�sticos!\n", nome);
	break;
	default: 
		printf("\nC�digo inv�lido!!!!!\n");
	break;
}



return 0;
}

