#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	/*char op = 's';
	
	while(op== 's' || op== 'S'){ //While repete o loop sempre que o valor se mantiver.
		
		printf("Oi!!\n");
		printf("Digite s para continuar ou n para sair: ");//nesse caso tudo que n�o for a condi��o 's' e 'S' ser� recusada e quebrara o loop indo ao return 0 no final.
		scanf(" %c", &op);
	}
	
	int op = 0;
	
	while(op==0){
		
		printf("Oi!\n");
		printf("Digite 0 para continuar ou qualquer outro n�mero para sair: ");
		scanf("%d", &op);
	} */
	
	int op = 1, n, soma=0, contador=0;
	
	while(op==1){
		
		printf("Digite um n�mero para ser somado: ");
		scanf("%d", &n);
		
		soma = soma+n;
		contador++;
	
		printf("Digite 1 para continuar ou qualquer outro n�mero para sair: ");
		scanf("%d", &op);
	}
	
	printf("\nForam digitados %d n�meros e a soma deles � = %d\n", contador, soma);
	

return 0;
}

