#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

float a, b, result;
char op;
printf("Bem vindo(a) � calculadora!\n");
printf("Digite dois n�meros:\n");
scanf("%f %f", &a, &b);
printf("Escolha a opera��o:\n\n");
printf("+ soma\n- subtra��o\n* multiplica��o\n/ divis�o\n");
scanf(" %c", &op);

switch(op){
	case '+':
		result = a+b;
		printf("%.2f + %.2f = %.2f\n", a, b, result);
		break;
	case '-':
		result = a-b;
		printf("%.2f - %.2f = %.2f\n", a, b, result);
		break;	
	case '*':
		result = a*b;
		printf("%.2f * %.2f = %.2f\n", a, b, result);
		break;
	case '/':
		if(b!= 0){
		result = a/b;
		printf("%.2f / %.2f = %.2f\n", a, b, result);
		break;
	}else{
		printf("\nDivis�o por zero!!\\n");
		break;
	default:
		printf("\nOp��o n�o v�lida!!\\n");
	}
	
}




return 0;
}

