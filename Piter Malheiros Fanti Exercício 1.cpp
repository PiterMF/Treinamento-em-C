/* 	Piter Malheiros Fanti
	RA XXXXXXXX 
	
	Lista Condicional Exerc�cio 1: 
	"Escreva um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha v�lida � o n�mero 9999.
	Caso a senha esteja correta, apresentar a mensagem na tela:
	� ACESSO PERMITIDO � Seja bem vindo(a)!
	Caso a senha esteja incorreta:
	� ACESSO NEGADO � Senha inv�lida!!!"	*/
	
	#include <stdio.h>
	#include <locale.h>
	
	int main(){
	
		setlocale(LC_ALL, "portuguese");
		
		char login[50];
		int senha;
		printf("Ol�, usu�rio!\nPor favor, insira seus dados.\nLogin: ");
		scanf(" %s", &login);
		printf("Senha: ");
		scanf("%d", &senha);
		
		if (senha== 9999){
			printf("\nACESSO PERMITIDO - Seja bem vindo(a) %s!\n", login);
		}else{
			printf("\nACESSO NEGADO - Senha inv�lida!!!\n");
		}
		
		
		
		return 0;
	}
