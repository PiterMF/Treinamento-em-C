/* 	Piter Malheiros Fanti
	RA XXXXXXX
	
	Lista Condicional Exerc�cio 3:
	Fa�a um programa que informe a quantidade total de calorias de uma refei��o a partir do usu�rio que dever� informar o prato e a bebida 
	(veja a tabela a seguir).
		Prato		Calorias	Bebida				Calorias
		Vegetariano	200 Kcal	Ch�					25 Kcal
		Frango		350 Kcal	Suco de laranja		100 Kcal
		Carne		480 Kcal	Refrigerante diet	65 Kcal
	Sugest�o: enumere cada op��o de prato e bebida.
	Prato:				Bebida:
	1 � Vegetariano		1 � Ch�
	2 � Frango			2 � Suco de laranja
	3� Carne			3 � Refrigerante diet*/
	
	#include <stdio.h>
	#include <locale.h>
	
	int main(){
		
		setlocale(LC_ALL, "portuguese");
		
		int prato, bebida;
		printf("Ol�, usu�rio!\nPor favor, digite o n�mero do prato escolhido:\n\n(1) Vegetariano\n(2) Frango\n(3) Carne\n\n");
		scanf("%d", &prato);
		
		if(prato == 1){
			prato = 200;
		}else if(prato == 2){
			prato = 350;
		}else if(prato == 3){
			prato = 480;
		}else{
			printf("\nPrato inv�lido!! Imposs�vel calcular total de calorias!\n");
			return 0;
		}
				
		printf("\n\nPor favor, digite o n�mero da bebida escolhida:\n\n(1) Ch�\n(2) Suco de Laranja\n(3) Refrigerante Diet\n\n");
		scanf("%d", &bebida);
		
		
		if(bebida == 1){
			bebida = 25;
		}else if(bebida == 2){
			bebida = 100;
		}else if(bebida == 3){
			bebida = 65;
		}else{
			printf("\nBebida inv�lida!! Imposs�vel calcular total de calorias!\n");
			return 0;
		}
		
		
		printf("\nO total de calorias de sua refei��o �: %d Kcal\n", prato+bebida);
		
		return 0;
	}
