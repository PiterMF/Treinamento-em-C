#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
/*int i, n;
n = 1;
for (i = 0; i<10; i++){// o ++ ou -- faz aumentar ou diminuir de 1 em 1 unidade;
	printf("i = %d\n", i); // enquanto o \n quebra linha, o \t faz tab;
	n = n+2;
	printf("n = %d\n", n);
}

n++;
printf("\nAcabou a repeti��o, agora � o �ltimo n:\n");
printf("n = %d\n", n);*/

/*
int i; 
for (i= 0; i<50; i++){
printf("TravaZAP\n"); // imprime a frase 50 vezes;
} */

/*int ni, nf, i;
printf("Digite o n�mero inicial: ");
scanf("%d", &ni);
printf("Agora digite o n�mero final: ");
scanf("%d", &nf);
// estamos aqui deixando o usu�rio decidir os par�metros;
for (i=ni; i<nf; i++){
	printf("\n%d\n", i);
}*/

/*int i, num, result;
printf("Bem vindo � tabuada do 1 ao 10\nDigite o n�mero que quer saber a tabuada: ");
scanf("%d", &num);

for (i= 1; i<11; i++){
	result = num*i;
	printf("\n%dx%d= %d\n", i, num, result);
}*/

/*int i, soma = 0;
for (i=1; i<=10; i++){
	soma +=  i;
}
printf("soma dos n�meros de 1 a 10 �: %d\n", soma);*/
/*int i, soma = 0;
for (i=6; i<=19; i++){
	soma +=  i;
printf("soma dos n�meros de 6 a %d �: %d\n", i, soma);
}*/

/*int i, soma = 0;
for (i=50; i<=200; i++){
	if(i%4==0){
	soma +=  i;
printf("soma dos n�meros m�ltiplos de 4 entre 50 e %d �: %d\n", i, soma);
}
}*/

int x, y, i, soma=0;
printf("Digite o ponto x: ");
scanf("%d", &x);
printf("Digite o ponto y: ");
scanf("%d", &y);

if(x>=y){
for (i= y; i<=x; i++){
	soma = soma+i;
	printf("\nSoma de %d a %d �: %d\n", y, i, soma);
}}else{
	for (i= x; i<=y; i++){
	soma = soma+i;
	printf("\nSoma de %d a %d �: %d\n", x, i, soma);


}
}





return 0;
}

