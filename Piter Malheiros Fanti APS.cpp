/*APS de Algorítimos e Programação
Ana Beatriz Xavier de Carvalho - RA XXXXXXXX
Lucas Gustavo Toledo de Souza - RA XXXXXXXX
Piter Malheiros Fanti - RA XXXXXXXX
Taís Maciel de Oliveira - RA XXXXXXXX
*/

#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	int i, k, n, m, x, y;
	
	printf("Saudações, cidadões da Terra Média!\nPor favor, insira o número de consultas de residências que se deseja fazer \n(Ou digite 0 para sair): ");
	scanf("%d", &k);//Pede ao usuário o número de consultas k que serão realizadas.
		if(k==0){
			printf("Até breve aventureiros(as)!!\nTentem não morrer!\n");
			return 0;//Conforme solicitado pelo cliente, ao inserir 0, o programa cessa.
		}

	while(k<0){//Garante que o valor de consultas seja um número válido e que não seja inserido erroneamente.
		printf("\nOpa! Dragões são criaturas mágicas, computadores não.\nInsira um valor válido (Ou digite 0 para sair): ");
		scanf("%d", &k);//Pede um valor válido de número de consultas.
		if(k==0){
			printf("Até breve aventureiros(as)!!\nTentem não morrer!\n");
			return 0;//Conforme solicitado pelo cliente, ao inserir 0, o programa cessa.
		}
	}	
	
	printf("\nInsira respectivamente as coordenadas LESTE-OESTE e NORTE-SUL da divisa da Terra-Média (Ou digite 0 para sair):\n");
	scanf("%d%d", &n, &m);//Pede a indicação geral das coordenadas LESTE-OESTE e em seguida NORTE-SUL do ponto divisor da terra média.
	if(m==0||n==0){
			printf("Até breve aventureiros(as)!!\nTentem não morrer!\n");
			return 0;//Conforme solicitado pelo cliente, ao inserir 0, o programa cessa.
		}	
	while(i<k){//Garante que o loop ocorrerá apenas durante o intervalo de consultas informado anteriormente em k.
		printf("Insira a coordenada LESTE-OESTE e depois a NORTE-SUL de sua moradia \n(Ou digite 0 para sair):\n");
		scanf("%d%d", &x, &y);//Pede as coordenadas LESTE-OESTE e NORTE-SUL da residência do morador.
		if(x==0||y==0){
			printf("Até breve aventureiros(as)!!\nTentem não morrer!\n");
			return 0;//Conforme solicitado pelo cliente, ao inserir 0, o programa cessa.
		}
		printf("\nA localização da sua residência na nova divisão da Terra-Média é: ");
			
		if(x==n || y==m){//Caso as coordenadas x e y das residências forem iguais às da divisa em algum ponto, quer dizer que estarão na linha divisória.
			printf("DIVISA\n\n");
		}else if(x>n){//Caso o x seja maior que n, num plano cartesiano, a residência estaria no 1º ou 2º quadrantes com centro no ponto de divisa da Terra-Média.
				if(y>m){//Caso o x seja maior que n e o y maior que m, a residência estaria no 1º quadrante de um plano cartesiano com centro no ponto de divisa da Terra-Média.
					printf("NE\n\n");	
				}else{//Caso o x seja maior que n e o y menor que m, a residência estaria no 2º quadrante de um plano cartesiano com centro no ponto de divisa da Terra-Média.
					printf("SE\n\n");	
				}
		}else{//Caso o x seja menor que n, num plano cartesiano, a residência estaria no 3º ou 4º quadrantes com centro no ponto de divisa da Terra-Média.
			if(y>m){//Caso o x seja menor que n e o y maior que m, a residência estaria no 4º quadrante de um plano cartesiano com centro no ponto de divisa da Terra-Média.
				printf("NO\n\n");	
			}else{//Caso o x seja menor que n e o y maior que m, a residência estaria no 3º quadrante de um plano cartesiano com centro no ponto de divisa da Terra-Média.
				printf("SO\n\n");	
			}
		}

	i++;//Acresce o contador i para que o loop dure apenas a quantidade de consultas k indicada.
	}
	
return 0;//Finaliza  programa.
}
