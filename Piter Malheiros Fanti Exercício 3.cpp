/* 	Piter Malheiros Fanti
	RA XXXXXXX
	
	Lista Condicional Exercício 3:
	Faça um programa que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato e a bebida 
	(veja a tabela a seguir).
		Prato		Calorias	Bebida				Calorias
		Vegetariano	200 Kcal	Chá					25 Kcal
		Frango		350 Kcal	Suco de laranja		100 Kcal
		Carne		480 Kcal	Refrigerante diet	65 Kcal
	Sugestão: enumere cada opção de prato e bebida.
	Prato:				Bebida:
	1 – Vegetariano		1 – Chá
	2 – Frango			2 – Suco de laranja
	3– Carne			3 – Refrigerante diet*/
	
	#include <stdio.h>
	#include <locale.h>
	
	int main(){
		
		setlocale(LC_ALL, "portuguese");
		
		int prato, bebida;
		printf("Olá, usuário!\nPor favor, digite o número do prato escolhido:\n\n(1) Vegetariano\n(2) Frango\n(3) Carne\n\n");
		scanf("%d", &prato);
		
		if(prato == 1){
			prato = 200;
		}else if(prato == 2){
			prato = 350;
		}else if(prato == 3){
			prato = 480;
		}else{
			printf("\nPrato inválido!! Impossível calcular total de calorias!\n");
			return 0;
		}
				
		printf("\n\nPor favor, digite o número da bebida escolhida:\n\n(1) Chá\n(2) Suco de Laranja\n(3) Refrigerante Diet\n\n");
		scanf("%d", &bebida);
		
		
		if(bebida == 1){
			bebida = 25;
		}else if(bebida == 2){
			bebida = 100;
		}else if(bebida == 3){
			bebida = 65;
		}else{
			printf("\nBebida inválida!! Impossível calcular total de calorias!\n");
			return 0;
		}
		
		
		printf("\nO total de calorias de sua refeição é: %d Kcal\n", prato+bebida);
		
		return 0;
	}
