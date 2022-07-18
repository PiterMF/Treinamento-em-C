#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
		
	/*int a;
	printf("Digite um número inteiro:\n");
	scanf("%d", &a);
	
	//if aninhado, neste caso, com 3 possibilidades
	
	if(a>0){
		printf("\n%d é MAIOR que Zero.\n", a);
	} else if(a<0){
		printf("\n%d é MENOR que Zero.\n", a);
	} else{
		printf("\n%d é IGUAL a Zero.\n", a);
	}*/
	
	/*char nome[50], sexo;
	printf("Qual seu nome?\n");
	scanf(" %s", nome); //é necessário o espaço antes do %c ou %s para limpar o buffer de possíveis "sujeiras" e evitar problemas de leitura nos dados inseridos
	printf("\nMuito prazer, %s\nMe diga por favor, qual seu sexo? (m/f)\n", nome);
	scanf(" %c", &sexo);
	
	if (sexo== 'm'||sexo== 'f'||sexo== 'M'||sexo== 'F'){
			printf("\n%s, seu sexo é binário!\n", nome);
		}else{
			printf("\n%s, seu sexo é não binário!\n", nome);
		}*/
		
		//ex 2
		/*int num;
		printf("Olá, insira um número:\n");
		scanf("%d", &num);
		
		if (num % 2 == 0){ // % serve para verificar resto da divisão por 2 nesse caso
			printf("\n%d é um número par.\n", num);
			
		}else{
			printf("\n%d é um número ímpar.\n", num);
		}
		
		if(num >0){
			printf("\n%d é um número positivo.\n", num);
		}else if(num == 0){
			printf("\n%d é Zero.\n", num);
		}else{
			printf("\n%d é um número negativo.\n", num);
		}*/
	
	
	//ex 3
	/*float n1, n2, dif;
	printf("Olá, insira dois números para se verificar a diferença entre os mesmos:\n");
	scanf("%f""%f", &n1, &n2);
	if(n1>n2){
		dif= n1-n2;
	}else {
		dif= n2-n1;
	}
		printf("\nA diferença é: %.2f\n", dif);*/
		
	//ex 4
	 float hrs, sal;
	 int lvl;
	 char nome[50];
	printf("Olá, insira o nome do(a) professor(a): ");
	scanf(" %s", &nome);
	printf("Olá, insira o nível do(a) professor(a) (1, 2 ou 3): ");
	scanf("%d", &lvl);
	printf("Olá, insira a quantidade de horas lecionadas pelo(a) professor(a): ");
	scanf("%f", &hrs);
	if (lvl == 1){
		sal = hrs*12;
			printf("\nO(A) Professor(a) %s recebe: R$%.2f\n", nome, sal);
	}else if(lvl == 2){
		sal = hrs*17;
			printf("\nO(A) Professor(a) %s recebe: R$%.2f\n", nome, sal);
	}else if(lvl == 3){
		sal = hrs*25;
			printf("\nO(A) Professor(a) %s recebe: R$%.2f\n", nome, sal);
	}else{
		printf("\nPor favor, tente novamente e insira um nível válido\n");
	}
		
	
	
	return 0;
}
