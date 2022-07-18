/* 	Piter Malheiros Fanti
	RA XXXXXXXX
	
	Lista Condicional Exerc�cio 5:
	Fa�a um programa que escreva um menu de op��es, como uma calculadora, conforme exemplo abaixo. Leia a op��o do usu�rio e execute a opera��o escolhida. 
	Escreva uma mensagem de erro se a op��o for inv�lida.
	Op��es:
	1- Soma de 2 n�meros.
	2- Diferen�a entre 2 n�meros (maior pelo menor).
	3- Produto entre 2 n�meros.
	4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero). */
	
	
	#include <stdio.h>
	#include <locale.h>
	
	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		int opr;
		float n1, n2;
		printf("Ol�, usu�rio!\nPor favor, selecione a opera��o desejada:\n\n(1)Soma entre dois n�meros\n(2)Diferen�a entre dois n�meros\n(3)Produto entre dois n�meros\n(4)Divis�o entre dois n�meros\n\n");
		scanf("%d", &opr);
		
		if(opr == 1){
			printf("\nInsira os dois n�meros a serem somados:\n");
			scanf("%f""%f", &n1, &n2);
			printf("\nA soma �: %.2f\n", n1+n2);
		}else if(opr == 2){
			printf("\nInsira os dois n�meros para calcular a diferen�a:\n");
			scanf("%f""%f", &n1, &n2);
				if(n1 > n2){
				printf("\nA differen�a � de: %.2f\n", n1-n2);
				}else{
					printf("\nA differen�a � de: %.2f\n", n2-n1);
				}
		}else if(opr == 3){
			printf("\nInsira os dois n�meros para se obter o produto:\n");
			scanf("%f""%f", &n1, &n2);
			printf("\nO produto �: %.2f\n", n1*n2);
		}else if(opr == 4){
			printf("\nInsira o numerador:\n");
			scanf("%f", &n1);
			printf("\nInsira o divisor:\n");
			scanf("%f", &n2);
				if(n2 == 0){
					printf ("\nERRO!! O DIVISOR N�O PODE SER IGUAL A ZERO\n");
					return 0;	
				}else{
				printf("\nA divis�o �: %.2f\n", n1/n2);		
				}
		}else{
			printf("\nERRO!! Op��o inv�lida!\n");
		}
	
		
		return 0;
	}
