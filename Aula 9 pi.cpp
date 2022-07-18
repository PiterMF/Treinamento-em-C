#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

//Exerc�cio 13
	setlocale (LC_ALL, "portuguese");
	int i, n;
	float S=0, pi, d=1;//S � a soma ou subtra��o; d � o divisor que altera conforme enunciado
	
	printf("Quantos n�meros ter� a sequ�ncia?\n");
	scanf("%d", &n);//pergunta para o usu�rio quantos termos ter� a s�rie.
	
	for(i=0; i<n; i++){
		if(i%2==0){//verificando se � par ou �mpar conforme enunciado para alternar entre soma e sutra��o das fra��es.
			S = S + 1.0/pow(d,3);//o ".0" no n�mero � para que o c�digo n�o interprete o float como um int.
		}else{
			S = S - 1.0/pow(d,3);//o pow � do enunciado
		}
		d+=2;//adiciona 2 ao divisor
	}
	pi = pow ((S*32), (1.0/3));//f�rmula para calular o pi conforme enunciado; o (1.0/3) � a raiz c�bicca em forma de pot�ncia.
	printf("Pi = %.5f\n", pi);

return 0;
}

