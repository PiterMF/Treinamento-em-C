#include <stdio.h>
#include <locale.h>

int main(){
	//Algorítmo 5
	setlocale (LC_ALL, "portuguese");
	
	int idade=1;
	
	
	while (idade!=0){
		printf("Digite a idade da pessoa: ");
		scanf("%d", &idade);
		if(idade>=18){
			printf("\nBem vindo(a)!!!! A NOITE É UMA CRIANÇA! PIZZA GRÁTIS E TALS\n");
		}else{
			printf("\nVOCÊ NÃO TEM IDADE SUFICIENTE PARA ENTRAR, SAIA!\n");
		}
		printf("\nDigite a idade 0 para sair!\n\n");
	}
	


return 0;
}

