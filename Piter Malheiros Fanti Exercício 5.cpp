/* 	Piter Malheiros Fanti
	RA XXXXXXXX
	
	Lista Condicional Exercício 5:
	Faça um programa que escreva um menu de opções, como uma calculadora, conforme exemplo abaixo. Leia a opção do usuário e execute a operação escolhida. 
	Escreva uma mensagem de erro se a opção for inválida.
	Opções:
	1- Soma de 2 números.
	2- Diferença entre 2 números (maior pelo menor).
	3- Produto entre 2 números.
	4- Divisão entre 2 números (o denominador não pode ser zero). */
	
	
	#include <stdio.h>
	#include <locale.h>
	
	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		int opr;
		float n1, n2;
		printf("Olá, usuário!\nPor favor, selecione a operação desejada:\n\n(1)Soma entre dois números\n(2)Diferença entre dois números\n(3)Produto entre dois números\n(4)Divisão entre dois números\n\n");
		scanf("%d", &opr);
		
		if(opr == 1){
			printf("\nInsira os dois números a serem somados:\n");
			scanf("%f""%f", &n1, &n2);
			printf("\nA soma é: %.2f\n", n1+n2);
		}else if(opr == 2){
			printf("\nInsira os dois números para calcular a diferença:\n");
			scanf("%f""%f", &n1, &n2);
				if(n1 > n2){
				printf("\nA differença é de: %.2f\n", n1-n2);
				}else{
					printf("\nA differença é de: %.2f\n", n2-n1);
				}
		}else if(opr == 3){
			printf("\nInsira os dois números para se obter o produto:\n");
			scanf("%f""%f", &n1, &n2);
			printf("\nO produto é: %.2f\n", n1*n2);
		}else if(opr == 4){
			printf("\nInsira o numerador:\n");
			scanf("%f", &n1);
			printf("\nInsira o divisor:\n");
			scanf("%f", &n2);
				if(n2 == 0){
					printf ("\nERRO!! O DIVISOR NÃO PODE SER IGUAL A ZERO\n");
					return 0;	
				}else{
				printf("\nA divisão é: %.2f\n", n1/n2);		
				}
		}else{
			printf("\nERRO!! Opção inválida!\n");
		}
	
		
		return 0;
	}
