#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	//exerc�cio 2 aula 9
	int i, soma=0,  num, maior=-999999, menor=999999;
	float  contpar=0, contimp=0, cont=0, somaimp=0, somapar=0, media;
	float mediapar, mediaimp, imporcent;
	char op = 's';
	
	while(op == 's'|| op=='S'){
		printf("Digite um n�mero: ");
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
	printf("\nO maior n�mero � %d", maior);
	printf("\nO menor n�mero � %d", menor);
	printf("\nA soma total de n�meros � %d e a m�dia � %.2f", soma, media);
	printf("\nE o total de n�meros digitados � %.2f", cont);
	printf("\nA m�dia dos n�meros pares � %.2f e o porcentual de �mpares � %.0f", mediapar, imporcent);
	
	

return 0;
}

