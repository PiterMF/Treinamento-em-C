/* 	Piter Malheiros Fanti
	RA XXXXXXXX
	
	Lista Condicional Exercício 4:
	Faça um programa que calcule a média ponderada das notas de 4 provas.
	• A primeira tem peso 1, a segunda prova tem peso 3, a terceira tem peso 5 e a última tem peso 7.
	Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 6 pontos. */
	
	#include <stdio.h>
	#include <locale.h>
	
	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		float n1, n2, n3, n4, med;
		printf("Olá, usuário!\n
		Por favor, digite a nota da primeira prova (peso 1): ");
		scanf("%f", &n1);
		printf("Agora, por favor, digite a nota da segunda prova (peso 3): ");
		scanf("%f", &n2);
		printf("Agora, por favor, digite a nota da terceira prova (peso 5): ");
		scanf("%f", &n3);
		printf("Agora, por favor, digite a nota da quarta prova (peso 7): ");
		scanf("%f", &n4);
		med = (n1 + (n2*3) + (n3*5) + (n4*7)) / 16; //média ponderada = (nota_1*peso_1 + nota_2*peso_2 + nota_n*peso_n) / (peso_1 + peso_2 + peso_n)
		
		if(med >= 6){
			printf("\n\nAPROVADO(A)!! Parabéns, você foi aprovado(a) com média: %.2f\n\n(Média mínima para aprovação: 6)\n", med);
		}else{
			printf("\n\nREPROVADO(A)!! Infelizmente, você foi reprovado(a) com média: %.2f\n\n(Média mínima para aprovação: 6)\n", med);
		}
		
		return 0;
	}
