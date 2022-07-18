#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	/*Exercício 1 lista for
	int i;
		
		for(i=2; i<=50; i+=2){ //incrementa de 2 em 2 e printa
			printf("%d\t", i);
		} */
		
		/*Exercício 2
	int i;
		
		for(i=11; i<=101; i+=10){ //incrementa de 2 em 2 e printa
			printf("%d\t", i);
		} */
	
	/*Exercício 3
	int i;
	float n, maior, menor;
	
	printf("Digite um número:\n");
	scanf("%f", &n);
	maior = n;
	menor = n;
	
	for(i=1; i<10; i++){
	printf("Digite outro número:\n");
	scanf("%f", &n);
		if(n>maior){
			maior= n;
		}
		if(n<menor){
			menor= n;
		}
	}	
	printf("\nO maior número digitado foi: %.1f\n", maior);
	printf("\nO menor número digitado foi: %.1f\n", menor);	*/
	
	/*Exercício 4
	int i, n, soma=0;
		
	for(i=1; i<100; i++){
		printf("Digite um número para soma:\n");
		scanf("%d", &n);
		soma = soma+n;
	}
	printf("\nA soma dos seus números é: %d\n", soma);*/
	
	/*Exercício 5
	int i, n, N, soma=0;
	
	printf("Quantos números quer inserir?\n");
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		printf("Digite o %dº número:\n", i+1);
		scanf("%d", &n);
		if(n%2==1){
			soma = soma + n;
		}
	}
	printf("A soma dos números ímpares digitados é: %d\n", soma);*/
	
	/*Exercício 6
	int i, n, prod=1;
		
	for(i=1; i<100; i++){
		printf("Digite um número para multiplicar:\n");
		scanf("%d", &n);
		prod = prod*n;
	}
	printf("\nA soma dos seus números é: %d\n", prod);*/
	
	//Exercício 7
		
	
	

return 0;
}

