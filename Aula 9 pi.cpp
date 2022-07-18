#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

//Exercício 13
	setlocale (LC_ALL, "portuguese");
	int i, n;
	float S=0, pi, d=1;//S é a soma ou subtração; d é o divisor que altera conforme enunciado
	
	printf("Quantos números terá a sequência?\n");
	scanf("%d", &n);//pergunta para o usuário quantos termos terá a série.
	
	for(i=0; i<n; i++){
		if(i%2==0){//verificando se é par ou ímpar conforme enunciado para alternar entre soma e sutração das frações.
			S = S + 1.0/pow(d,3);//o ".0" no número é para que o código não interprete o float como um int.
		}else{
			S = S - 1.0/pow(d,3);//o pow é do enunciado
		}
		d+=2;//adiciona 2 ao divisor
	}
	pi = pow ((S*32), (1.0/3));//fórmula para calular o pi conforme enunciado; o (1.0/3) é a raiz cúbicca em forma de potência.
	printf("Pi = %.5f\n", pi);

return 0;
}

