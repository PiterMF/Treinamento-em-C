#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

int i, n;
char op;
float termo, result=0;

printf("Olá usuário, escolha sua operação: + ou -\n\n");
scanf(" %c", &op);
	
	switch (op){
		case '+':
			printf("\nAgora digite o número de termos:\n");
			scanf("%d", &n);
			
			for (i=0; i<n; i++){
				printf("\nAgora digite um termo que se deseja somar:\n");
				scanf("%f", &termo);	
				result=result + termo; 
			}printf("\n%.2f\n", result);
			
		break;
		case '-':
			printf("\nAgora digite o número de termos:\n");
			scanf("%d", &n);
				
			for (i=0; i<n; i++){
				printf("\nAgora digite um termo que se deseja subtrair:\n");
				scanf("%f", &termo);	
				result= result - termo; 
			}printf("\n%.2f\n", result);
			
		break;			
		default:
			printf("\nOPERAÇÃO INVÁLIDA! MAIS OU MENOS APENAS (+/-)\n");
			return 0;
		break;		
	}





return 0;
}

