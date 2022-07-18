/* 	Piter Malheiros Fanti
	RA XXXXXXXX
	
	Lista Condicional Exercício 2:
	Faça um programa que leia dois valores inteiros (x e y) e some-os. 
	Se o resultado da soma for maior ou igual a 6, apresente-o. 
	Caso a soma seja menor do que 6, apresente-o somando 4 a ele.*/
	
	#include <stdio.h>
	#include <locale.h>
	
	int main(){
		
		setlocale(LC_ALL, "portuguese");
		
		int x, y;
		printf("Olá, usuário!\nPor favor, insira dois números inteiros para soma\n(caso a soma seja menor que 6, o total será acrescido em 4):\n");
		scanf("%d""%d", &x, &y);
		
		if(x+y >= 6){
			printf("\nA soma dos números é: %d\n", x+y);
		}else{
			printf("\nA soma dos números acrescida de 4 é: %d\n", x+y+4);
		}
		
		
		return 0;
	}
	
