#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

	setlocale(LC_ALL, "portuguese");

	//Lista Sequencial:
	// 1. Faça um algoritmo que receba dois números reais, calcule e mostre a subtração do primeiro número pelo segundo:
	int n1, n2, sub;
	printf("insira dois números reais para subtração do primeiro pelo segundo:\n");
	scanf("%d""%d", &n1, &n2);
	sub = n1-n2;
	printf("\no resultado da subtração é: %d\n", sub);

	//2. Escreva um algoritmo que receba um número via teclado e informe em seguida a metade e o quadrado desse número:
	float num;
	printf("Insira um número com ao menos uma casa decimal (independente de ser zero) \npara verificar sua metade e seu quadrado:\n");
	scanf("%f", &num);
	printf("\nA metade do seu número é: %.2f\nE seu quadrado é: %.2f", num/2, pow(num,2));

	//3. Faça um algoritmo que leia quatro números informados pelo usuário e que depois imprima a média ponderada, sabendose que os pesos são respectivamente: 1, 3, 5 e 7:
	float n1, n2, n3, n4;
	printf("Insira quatro números para receber a média ponderada de cada número\n considerando para cada um os respectivos pesos: 1, 3, 5 e 7:\n");
	scanf("%f""%f""%f""%f", &n1, &n2, &n3, &n4);
	printf("\nSuas notas referentes aos pesos são respectivamente:\n%.2f\n%.2f\n%.2f\n%.2f\n", n1*1, n2*3, n3*5, n4*7);

	//4. Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%:
	float val;
	printf("Insira o preço do produto para adicionar o desconto de 9 por cento:\n");
	scanf("%f", &val);
	printf("\nSeu produto custará: %.2f\n", val*0.91);

	//5. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%, faça um algoritmo que leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo:
	float cufab, cufinal;
	printf("Informe o custo de fábrica do veículo:\nR$");
	scanf("%f", &cufab);
	cufinal = (cufab*1.45)*1.28;
	printf("\nO custo final do veículo é: R$%.2f\n", cufinal);


	return 0;
}
