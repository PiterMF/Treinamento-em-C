#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	//exercício 2 aula 9
	int i, soma=0,  num, maior=-999999, menor=999999;
	float  contpar=0, contimp=0, cont=0, somaimp=0, somapar=0, media;
	float mediapar, mediaimp, imporcent;
	char op = 's';
	
	while(op == 's'|| op=='S'){
		printf("Digite um número: ");
		scanf("%d", &num);
		cont++;
		
		if(num<menor){
			menor = num;
		}
		if(num>maior){
			maior = num;
		}
		if (num%2==0){
			contpar++;
			somapar= somapar+num;
		}else{
			contimp++;
			somaimp=somaimp+num;
		}
		soma = soma+num;
	
		printf("Digite s para continuar ou n para sair: ");
		scanf(" %c", &op);	
	}
	media = soma/cont;
	mediapar = somapar/contpar;
	imporcent = contimp*100/cont;
	printf("\nO maior número é %d", maior);
	printf("\nO menor número é %d", menor);
	printf("\nA soma total de némeros é %d e a média é %.2f", soma, media);
	printf("\nE o total de números digitados é %.2f", cont);
	printf("\nA média dos números pares é %.2f e o porcentual de ímpares é %.0f", mediapar, imporcent);
	
	

return 0;
}

