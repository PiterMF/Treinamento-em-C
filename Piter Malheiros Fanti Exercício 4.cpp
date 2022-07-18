/* 	Piter Malheiros Fanti
	RA XXXXXXXX
	
	Lista Condicional Exerc�cio 4:
	Fa�a um programa que calcule a m�dia ponderada das notas de 4 provas.
	� A primeira tem peso 1, a segunda prova tem peso 3, a terceira tem peso 5 e a �ltima tem peso 7.
	Ao final, mostrar a m�dia do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprova��o deve ser igual ou superior a 6 pontos. */
	
	#include <stdio.h>
	#include <locale.h>
	
	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		float n1, n2, n3, n4, med;
		printf("Ol�, usu�rio!\n
		Por favor, digite a nota da primeira prova (peso 1): ");
		scanf("%f", &n1);
		printf("Agora, por favor, digite a nota da segunda prova (peso 3): ");
		scanf("%f", &n2);
		printf("Agora, por favor, digite a nota da terceira prova (peso 5): ");
		scanf("%f", &n3);
		printf("Agora, por favor, digite a nota da quarta prova (peso 7): ");
		scanf("%f", &n4);
		med = (n1 + (n2*3) + (n3*5) + (n4*7)) / 16; //m�dia ponderada = (nota_1*peso_1 + nota_2*peso_2 + nota_n*peso_n) / (peso_1 + peso_2 + peso_n)
		
		if(med >= 6){
			printf("\n\nAPROVADO(A)!! Parab�ns, voc� foi aprovado(a) com m�dia: %.2f\n\n(M�dia m�nima para aprova��o: 6)\n", med);
		}else{
			printf("\n\nREPROVADO(A)!! Infelizmente, voc� foi reprovado(a) com m�dia: %.2f\n\n(M�dia m�nima para aprova��o: 6)\n", med);
		}
		
		return 0;
	}
