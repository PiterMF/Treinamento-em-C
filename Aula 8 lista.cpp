#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	/*Exerc�cio 1 lista for
	int i;
		
		for(i=2; i<=50; i+=2){ //incrementa de 2 em 2 e printa
			printf("%d\t", i);
		} */
		
		/*Exerc�cio 2
	int i;
		
		for(i=11; i<=101; i+=10){ //incrementa de 2 em 2 e printa
			printf("%d\t", i);
		} */
	
	/*Exerc�cio 3
	int i;
	float n, maior, menor;
	
	printf("Digite um n�mero:\n");
	scanf("%f", &n);
	maior = n;
	menor = n;
	
	for(i=1; i<10; i++){
	printf("Digite outro n�mero:\n");
	scanf("%f", &n);
		if(n>maior){
			maior= n;
		}
		if(n<menor){
			menor= n;
		}
	}	
	printf("\nO maior n�mero digitado foi: %.1f\n", maior);
	printf("\nO menor n�mero digitado foi: %.1f\n", menor);	*/
	
	/*Exerc�cio 4
	int i, n, soma=0;
		
	for(i=1; i<100; i++){
		printf("Digite um n�mero para soma:\n");
		scanf("%d", &n);
		soma = soma+n;
	}
	printf("\nA soma dos seus n�meros �: %d\n", soma);*/
	
	/*Exerc�cio 5
	int i, n, N, soma=0;
	
	printf("Quantos n�meros quer inserir?\n");
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		printf("Digite o %d� n�mero:\n", i+1);
		scanf("%d", &n);
		if(n%2==1){
			soma = soma + n;
		}
	}
	printf("A soma dos n�meros �mpares digitados �: %d\n", soma);*/
	
	/*Exerc�cio 6
	int i, n, prod=1;
		
	for(i=1; i<100; i++){
		printf("Digite um n�mero para multiplicar:\n");
		scanf("%d", &n);
		prod = prod*n;
	}
	printf("\nA soma dos seus n�meros �: %d\n", prod);*/
	
	//Exerc�cio 7
		
	
	

return 0;
}

