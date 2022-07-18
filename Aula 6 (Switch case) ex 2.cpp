#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

float a, b, result;
char op;
printf("Por favor insira dois números:\n");
scanf("%f %f", &a, &b);
printf("Por favor escolha a operação:\n");
printf("\nM - média entre os dois números\nS - diferênça entre os dois números\nP - Produto entre os dois números\nD - divisão do primeiro número pelo segundo\n\n");
scanf(" %c", &op);

switch(op){
	case 'm':
	case 'M':
		result = (a+b)/2;
		printf("\nA média de %.2f e %.2f é: %.2f\n", a, b, result);
	break;
	case 's':
	case 'S':
		if(a>b){
			result = a-b;
			printf("\nA diferênça entre %.2f e %.2f é: %.2f\n", a, b, result);
		}else{
			result = b-a;
			printf("\nA diferênça entre %.2f e %.2f é: %.2f\n", b, a, result);
		}
	break;
	case 'P':
	case 'p':
		result = a*b;
		printf("\nO produto de %.2f e %.2f é: %.2f\n", a, b, result);
	break;
	case 'd':
	case 'D':
		if(b!=0){
			result = a/b;
			printf("\nA divisão de %.2f por %.2f é: %.2f\n", a, b, result);
		}else{
			printf("\nDivisão por zero!!!\n");
		}
	break;
	default:
		printf("\nOpção inválida!\n");
		return 0;
	break;
	
}printf("\nFim do comando\n");

return 0;
}

