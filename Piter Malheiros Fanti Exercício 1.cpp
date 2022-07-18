/* 	Piter Malheiros Fanti
	RA XXXXXXXX 
	
	Lista Condicional Exercício 1: 
	"Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 9999.
	Caso a senha esteja correta, apresentar a mensagem na tela:
	• ACESSO PERMITIDO – Seja bem vindo(a)!
	Caso a senha esteja incorreta:
	• ACESSO NEGADO – Senha inválida!!!"	*/
	
	#include <stdio.h>
	#include <locale.h>
	
	int main(){
	
		setlocale(LC_ALL, "portuguese");
		
		char login[50];
		int senha;
		printf("Olá, usuário!\nPor favor, insira seus dados.\nLogin: ");
		scanf(" %s", &login);
		printf("Senha: ");
		scanf("%d", &senha);
		
		if (senha== 9999){
			printf("\nACESSO PERMITIDO - Seja bem vindo(a) %s!\n", login);
		}else{
			printf("\nACESSO NEGADO - Senha inválida!!!\n");
		}
		
		
		
		return 0;
	}
