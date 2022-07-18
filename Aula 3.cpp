#include <stdio.h>
#include <locale.h>

int main(){
	
	/*int num;
	
	printf("digite um numero inteiro n: \n\n");
	scanf("%d", &num);
	printf("\nn = %d\n\n\n", num); */
	
	/*exercício de soma de 2 dados de entrada:
	
	float num_1, num_2, soma;
	
	printf("Ola usuario. insira um numero: ");
	scanf("%f", &num_1);
	printf("\nOtimo, agora insira um segundo numero: ");
	scanf("%f", &num_2);

	soma = num_1 + num_2;

	printf("\nObrigado. A soma de seus dois numeros eh: %.2f", soma);
	*/
	
	// uso da biblioteca locale:
	
	setlocale(LC_ALL, "portuguese"); //formatar a tela de saída de dados para português ao usuário.
	
	float n1, n2, media;
	printf("Digite as duas notas do aluno (n1 e n2 respectivamente):\n");
	scanf("%f""%f", &n1, &n2);
	media = (n1+n2)/2;
	printf("\nSua média é: %.2f", media);
	
	
	return 0;
}
