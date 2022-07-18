/*APS de Algor�timos e Programa��o
Ana Beatriz Xavier de Carvalho - RA XXXXXXXX
Lucas Gustavo Toledo de Souza - RA XXXXXXXX
Piter Malheiros Fanti - RA XXXXXXXX
Ta�s Maciel de Oliveira - RA XXXXXXXX
*/

#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	int i, k, n, m, x, y;
	
	printf("Sauda��es, cidad�es da Terra M�dia!\nPor favor, insira o n�mero de consultas de resid�ncias que se deseja fazer \n(Ou digite 0 para sair): ");
	scanf("%d", &k);//Pede ao usu�rio o n�mero de consultas k que ser�o realizadas.
		if(k==0){
			printf("At� breve aventureiros(as)!!\nTentem n�o morrer!\n");
			return 0;//Conforme solicitado pelo cliente, ao inserir 0, o programa cessa.
		}

	while(k<0){//Garante que o valor de consultas seja um n�mero v�lido e que n�o seja inserido erroneamente.
		printf("\nOpa! Drag�es s�o criaturas m�gicas, computadores n�o.\nInsira um valor v�lido (Ou digite 0 para sair): ");
		scanf("%d", &k);//Pede um valor v�lido de n�mero de consultas.
		if(k==0){
			printf("At� breve aventureiros(as)!!\nTentem n�o morrer!\n");
			return 0;//Conforme solicitado pelo cliente, ao inserir 0, o programa cessa.
		}
	}	
	
	printf("\nInsira respectivamente as coordenadas LESTE-OESTE e NORTE-SUL da divisa da Terra-M�dia (Ou digite 0 para sair):\n");
	scanf("%d%d", &n, &m);//Pede a indica��o geral das coordenadas LESTE-OESTE e em seguida NORTE-SUL do ponto divisor da terra m�dia.
	if(m==0||n==0){
			printf("At� breve aventureiros(as)!!\nTentem n�o morrer!\n");
			return 0;//Conforme solicitado pelo cliente, ao inserir 0, o programa cessa.
		}	
	while(i<k){//Garante que o loop ocorrer� apenas durante o intervalo de consultas informado anteriormente em k.
		printf("Insira a coordenada LESTE-OESTE e depois a NORTE-SUL de sua moradia \n(Ou digite 0 para sair):\n");
		scanf("%d%d", &x, &y);//Pede as coordenadas LESTE-OESTE e NORTE-SUL da resid�ncia do morador.
		if(x==0||y==0){
			printf("At� breve aventureiros(as)!!\nTentem n�o morrer!\n");
			return 0;//Conforme solicitado pelo cliente, ao inserir 0, o programa cessa.
		}
		printf("\nA localiza��o da sua resid�ncia na nova divis�o da Terra-M�dia �: ");
			
		if(x==n || y==m){//Caso as coordenadas x e y das resid�ncias forem iguais �s da divisa em algum ponto, quer dizer que estar�o na linha divis�ria.
			printf("DIVISA\n\n");
		}else if(x>n){//Caso o x seja maior que n, num plano cartesiano, a resid�ncia estaria no 1� ou 2� quadrantes com centro no ponto de divisa da Terra-M�dia.
				if(y>m){//Caso o x seja maior que n e o y maior que m, a resid�ncia estaria no 1� quadrante de um plano cartesiano com centro no ponto de divisa da Terra-M�dia.
					printf("NE\n\n");	
				}else{//Caso o x seja maior que n e o y menor que m, a resid�ncia estaria no 2� quadrante de um plano cartesiano com centro no ponto de divisa da Terra-M�dia.
					printf("SE\n\n");	
				}
		}else{//Caso o x seja menor que n, num plano cartesiano, a resid�ncia estaria no 3� ou 4� quadrantes com centro no ponto de divisa da Terra-M�dia.
			if(y>m){//Caso o x seja menor que n e o y maior que m, a resid�ncia estaria no 4� quadrante de um plano cartesiano com centro no ponto de divisa da Terra-M�dia.
				printf("NO\n\n");	
			}else{//Caso o x seja menor que n e o y maior que m, a resid�ncia estaria no 3� quadrante de um plano cartesiano com centro no ponto de divisa da Terra-M�dia.
				printf("SO\n\n");	
			}
		}

	i++;//Acresce o contador i para que o loop dure apenas a quantidade de consultas k indicada.
	}
	
return 0;//Finaliza  programa.
}
