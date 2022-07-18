#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");

float a, b, result;
char op;
printf("Bem vindo(a) à calculadora!\n");
printf("Digite dois números:\n");
scanf("%f %f", &a, &b);
printf("Escolha a operação:\n\n");
printf("+ soma\n- subtração\n* multiplicação\n/ divisão\n");
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
		printf("\nDivisão por zero!!\\n");
		break;
	default:
		printf("\nOpção não válida!!\\n");
	}
	
}




return 0;
}

