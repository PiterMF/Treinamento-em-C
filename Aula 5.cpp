#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	/* EX 1
	float n1, n2, soma;
	printf("Ol�, usu�rio!\nPor favor, insira dois n�meros para se realizar a soma:\n");
	scanf("%f""%f", &n1, &n2);
	soma = n1+n2;
	printf("\nA soma dos n�meros �: %.2f\n", soma);*/
	
	/* Ex 2
	float x,y,z;
	printf("Ol�, usu�rio!\nPor favor, insira tr�s n�meros para identificarmos o maior deles:\n");
	scanf("%f""%f""%f", &x, &y, &z);
	if(x>y && x>=z){
		printf("\nO maior n�mero �: %.2f\n", x);
	}else if (y>=x && y>=z){
		printf("\nO maior n�mero �: %.2f\n", y);
	}else{
		printf("\nO maior n�mero �: %.2f\n", z);
	} */
	
	/* Ex 3
	float x,y,z;
	printf("Ol�, usu�rio!\nPor favor, insira tr�s n�meros para identificarmos o menor deles:\n");
	scanf("%f""%f""%f", &x, &y, &z);
	if(x<=y && x<=z){
		printf("\nO menor n�mero �: %.2f\n", x);
	}else if (y<=x && y<=z){
		printf("\nO menor n�mero �: %.2f\n", y);
	}else{
		printf("\nO menor n�mero �: %.2f\n", z);
	} */
	
	/* Ex 4
	float lvl;
	printf("Ol�, usu�rio!\nPor favor, insira o n�vel de risco (0 a 10): ");
	scanf("%f", &lvl);
	if (lvl>=0 && lvl<=9){
		printf("\nO n�vel de alerta de risco n�o � grave\n");
	}else if(lvl>9 && lvl<=10){
		printf("\nALERTA DE RISCO GRAVE!!\n");
	}else{
		printf("\nInsira um n�vel v�lido!\n");
	}*/
	
	/* Ex 5
	float lvl;
	printf("Ol�, usu�rio!\nPor favor, insira o n�vel de risco (0 a 10): ");
	scanf("%f", &lvl);
	if (lvl>=0 && lvl<=3){
		printf("\nO n�vel de alerta de risco � Baixo\n");
	}else if(lvl>3 && lvl<=6){
		printf("\nO n�vel de alerta de risco � M�dio\n");
	}else if(lvl>6 && lvl<=9){
		printf("\nO n�vel de alerta de risco � Alto\n");
	}else if(lvl>9 && lvl<=10){
			printf("\nALERTA DE RISCO GRAVE!!\n");
	}else{
		printf("\nInsira um n�vel v�lido!\n");
	}*/
	
	/* Ex 6
	int x, y, z;
	printf("Ol�, usu�rio!\nPor favor, insira tr�s n�meros para saber se s�o m�ltiplos entre si:\n");
	scanf("%d""%d""%d", &x, &y, &z);
	
	if (x%y==0){
		printf("%d � m�ltiplo de %d\n", x, y);
	}
	if (x%z==0){
		printf("%d � m�ltiplo de %d\n", x, z);
	}
	if (y%x==0){
		printf("%d � m�ltiplo de %d\n", y, x);
	}
	if (y%z==0){
		printf("%d � m�ltiplo de %d\n", y, z);
	}
	if (z%x==0){
		printf("%d � m�ltiplo de %d\n", z, x);
	}
	if (z%y==0){
		printf("%d � m�ltiplo de %d\n", z, y);
	}*/
	
	/* Ex 7
	float a, b, c;
	printf("Informe os tr�s lados do pol�gono:\n");
	scanf("%f""%f""%f", &a, &b, &c);
	if(a<(b+c) && b<(a+c) && c<(a+b)){
		if(a==b && b==c){
			printf("Tri�ngulo Equil�tero!\n");
		}else if(a==b || a==c || b==c){
			printf("Tri�ngulo Is�celes!\n");
		}else{
			printf("Tri�ngulo Escaleno!\n");
		}
	}else{
		printf("N�o forma Tri�ngulo!\n");
	} */
	
	/* Ex 8
	char nome[50], est;
	int tempo;
	printf("Digite seu nome:\n");
	scanf(" %s", &nome);
	printf("Digite c-casado; s-solteiro; u-uni�o est�vel ou o-outros\n");
	scanf(" %c", &est);
	
	if(est=='c' || est=='u'){
		printf("%s, digite o tempo que est�o juntos (anos)\n", nome);
		scanf("%d", tempo);
		printf("Legal cab� o exerc�cio e.e\n");
	}*/
	
	/* Ex 9
	float num, result;
	printf("Insira o n�mero:\n");
	scanf("%f", &num);
	
	if(num>=0){
		result = num*2;	
	}else{
		result = num*3;
	}
	printf("O resultado do seu n�mero �: %.2f\n", result); */
		
	/* Ex 10
	float preco, novopreco;
	int metpag;
	printf("Digite o pre�o da etiqueta:\n");
	scanf("%f", &preco);
	printf("Digite a forma de pagamento:\n");
	printf("1 - � vista: dinheiro, pix ou d�bito\n");
	printf("2 - � vista: cr�dito\n");
	printf("3 - em 2x no cart�o\n");	
	printf("4 - em 3x no cart�o\n");
	scanf("%d", &metpag);
	
	if (metpag==1){
		novopreco = preco*0.9;
		printf("Pre�o a ser pago - R$%.2f", novopreco);
	}else if(metpag==2){
		novopreco = preco*0.95;
		printf("Pre�o a ser pago - R$%.2f", novopreco);
	}else if(metpag==3){
		novopreco = preco;
		printf("Pre�o a ser pago - R$%.2f", novopreco);
	}else if(metpag==4){
		novopreco = preco*1.05;
		printf("Pre�o a ser pago - R$%.2f", novopreco);
	}else{
		printf("Condi��o Inv�lida!!!");
	}*/
	
	/*int A,B,C,D,F,G;
	A=4,B=3,C=6,D=9,F=9,G=7;
	if(C==6){
		F=A*G;
		F=A+F;
		G=B+G;
	}
	printf("%d", D+F+A+C);
	*/
	int A,B,C,D,F,G;
	A=3,B=5,C=7,D=6,F=2,G=4;
	if((!(D<7))||(B>=9)){
G=F*G;
if(F==7){
B=F+B;
}else{
if((F>6)||(B<=3)){
C=B-B;
}
}
}else{
if(B>9){
F=F+D;
}
F=G-A;
}
printf(�%d�, G+B+C-F);
}
	
	
		
	return 0;
}
