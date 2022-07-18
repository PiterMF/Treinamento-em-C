#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

float a, b, result;
char op;
printf("Por favor insira dois n�meros:\n");
scanf("%f %f", &a, &b);
printf("Por favor escolha a opera��o:\n");
printf("\nM - m�dia entre os dois n�meros\nS - difer�n�a entre os dois n�meros\nP - Produto entre os dois n�meros\nD - divis�o do primeiro n�mero pelo segundo\n\n");
scanf(" %c", &op);

switch(op){
	case 'm':
	case 'M':
		result = (a+b)/2;
		printf("\nA m�dia de %.2f e %.2f �: %.2f\n", a, b, result);
	break;
	case 's':
	case 'S':
		if(a>b){
			result = a-b;
			printf("\nA difer�n�a entre %.2f e %.2f �: %.2f\n", a, b, result);
		}else{
			result = b-a;
			printf("\nA difer�n�a entre %.2f e %.2f �: %.2f\n", b, a, result);
		}
	break;
	case 'P':
	case 'p':
		result = a*b;
		printf("\nO produto de %.2f e %.2f �: %.2f\n", a, b, result);
	break;
	case 'd':
	case 'D':
		if(b!=0){
			result = a/b;
			printf("\nA divis�o de %.2f por %.2f �: %.2f\n", a, b, result);
		}else{
			printf("\nDivis�o por zero!!!\n");
		}
	break;
	default:
		printf("\nOp��o inv�lida!\n");
		return 0;
	break;
	
}printf("\nFim do comando\n");

return 0;
}

