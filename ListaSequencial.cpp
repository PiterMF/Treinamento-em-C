#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

	setlocale(LC_ALL, "portuguese");

	//Lista Sequencial:
	// 1. Fa�a um algoritmo que receba dois n�meros reais, calcule e mostre a subtra��o do primeiro n�mero pelo segundo:
	int n1, n2, sub;
	printf("insira dois n�meros reais para subtra��o do primeiro pelo segundo:\n");
	scanf("%d""%d", &n1, &n2);
	sub = n1-n2;
	printf("\no resultado da subtra��o �: %d\n", sub);

	//2. Escreva um algoritmo que receba um n�mero via teclado e informe em seguida a metade e o quadrado desse n�mero:
	float num;
	printf("Insira um n�mero com ao menos uma casa decimal (independente de ser zero) \npara verificar sua metade e seu quadrado:\n");
	scanf("%f", &num);
	printf("\nA metade do seu n�mero �: %.2f\nE seu quadrado �: %.2f", num/2, pow(num,2));

	//3. Fa�a um algoritmo que leia quatro n�meros informados pelo usu�rio e que depois imprima a m�dia ponderada, sabendose que os pesos s�o respectivamente: 1, 3, 5 e 7:
	float n1, n2, n3, n4;
	printf("Insira quatro n�meros para receber a m�dia ponderada de cada n�mero\n considerando para cada um os respectivos pesos: 1, 3, 5 e 7:\n");
	scanf("%f""%f""%f""%f", &n1, &n2, &n3, &n4);
	printf("\nSuas notas referentes aos pesos s�o respectivamente:\n%.2f\n%.2f\n%.2f\n%.2f\n", n1*1, n2*3, n3*5, n4*7);

	//4. Em �pocas de pouco dinheiro, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto. Fa�a um algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%:
	float val;
	printf("Insira o pre�o do produto para adicionar o desconto de 9 por cento:\n");
	scanf("%f", &val);
	printf("\nSeu produto custar�: %.2f\n", val*0.91);

	//5. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de f�brica, e depois a percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%, fa�a um algoritmo que leia o custo de f�brica de um carro e informe o custo ao consumidor do mesmo:
	float cufab, cufinal;
	printf("Informe o custo de f�brica do ve�culo:\nR$");
	scanf("%f", &cufab);
	cufinal = (cufab*1.45)*1.28;
	printf("\nO custo final do ve�culo �: R$%.2f\n", cufinal);


	return 0;
}
