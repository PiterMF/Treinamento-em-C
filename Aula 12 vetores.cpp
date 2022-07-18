#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	/*char nome1[] = "Ana";
	char nome2[] = "Piter";
	
	printf("%s\t%s", nome1, nome2);*/
	
	/*int i;
	int num[] = {15, 23, 40, 12, 37};//char em vetor n precisa de {} mas o int precisa.
	//posições	 [0,   1,  2,  3,  4]
	for (i=0; i<5; i++){
		printf("num [%d] = %d\n", i, num[i]);//aparentemente se n colocar isso, o vetor não tem posção, pois eu declarei vazia lá em cima.
	}*/

	/*int num [5], i;//Estamos delcarando que o 5 é o tamanho do vetor, ou seja, com [5], ele vai ter 5 posições: 0º, 1º, 2º, 3º e 4º
	
	printf("Digite 5 números:\n");
	for (i=0; i<5; i++){
		scanf("%d", &num[i]);//o i, estamos colocando um index genérico que será introduzido pelo usuário.
	}
	for (i=0; i<5; i++){
		printf("%dº = %d\n", i+1, num[i]);// aqui o i+1 é pq i começa de 0 e queremos indicar a posição, mas não altera o valor de i, apenas mostra na tela.
									   // o num[i] também é o que foi declarado anteriormente.
	}*/
	
	int num[5], i;
	
	for (i=0; i<5; i++){
		num[i]=0;//estamos indicando de onde ele comça para limpar as sujeiras de memória e evitar valores nada a ver com nada.
	}
	
	for (i=0; i<5; i++){
		printf("num[%d]=%d\n", i, num[i]);
	}

return 0;
}

