#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	/*char nome1[] = "Ana";
	char nome2[] = "Piter";
	
	printf("%s\t%s", nome1, nome2);*/
	
	/*int i;
	int num[] = {15, 23, 40, 12, 37};//char em vetor n precisa de {} mas o int precisa.
	//posi��es	 [0,   1,  2,  3,  4]
	for (i=0; i<5; i++){
		printf("num [%d] = %d\n", i, num[i]);//aparentemente se n colocar isso, o vetor n�o tem pos��o, pois eu declarei vazia l� em cima.
	}*/

	/*int num [5], i;//Estamos delcarando que o 5 � o tamanho do vetor, ou seja, com [5], ele vai ter 5 posi��es: 0�, 1�, 2�, 3� e 4�
	
	printf("Digite 5 n�meros:\n");
	for (i=0; i<5; i++){
		scanf("%d", &num[i]);//o i, estamos colocando um index gen�rico que ser� introduzido pelo usu�rio.
	}
	for (i=0; i<5; i++){
		printf("%d� = %d\n", i+1, num[i]);// aqui o i+1 � pq i come�a de 0 e queremos indicar a posi��o, mas n�o altera o valor de i, apenas mostra na tela.
									   // o num[i] tamb�m � o que foi declarado anteriormente.
	}*/
	
	int num[5], i;
	
	for (i=0; i<5; i++){
		num[i]=0;//estamos indicando de onde ele com�a para limpar as sujeiras de mem�ria e evitar valores nada a ver com nada.
	}
	
	for (i=0; i<5; i++){
		printf("num[%d]=%d\n", i, num[i]);
	}

return 0;
}

