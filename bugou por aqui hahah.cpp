#include <stdio.h>
#include <locale.h>

	int main (){
	setlocale(LC_ALL, "portuguese");
	//Declara��o de vari�veis
	
	int n, m, x, y, k, i;
	char ok;
	
	//Entrada
	
	printf("Ol�, moradores da Terra M�dia!\n");
	printf("Quantas consultas ser�o feitas?\n");
	scanf("%i", &k);
	printf("Por favor, digite dois n�meros inteiros:\n");
	scanf("%i %i", &n, &m);
	
	printf("\n00000000000000000000000000000000000000000000000000000\n\n");
	
	for (i=1;i<=k;i++){
		printf("Por favor, digite as coordenadas de sua resid�ncia:\n");
		scanf("%i %i", &x, &y);
	
		//VERIFICA��O - 'x' OU 'y' menor que 'n' ou 'm', ou seja: quadrante noroeste, sudeste, sudoeste
	
		if (x<=n || y<=m){
			if (x<n && y<m){
				printf("(%i,%i) - Sua resid�ncia se encontra na Terra M�dia Sudoeste\n", x, y);
			} 
			if (x<n && y>m){
				printf("(%i,%i) - Sua resid�ncia se encontra na Terra M�dia Noroeste\n", x, y);
			}
			if (x>n && y<m){
				printf("(%i,%i) - Sua resdi�ncia se encontra na Terra M�dia Sudeste\n", x, y);
			}
				//VERIFICA��O - Divisa, ou seja, 'x' e/ou 'y' igual a 'n' E/OU 'm'
					
					//Verifica��o Norte-Sul
				if (x==n && y<m){
					printf("(%i,%i) - Sua resid�ncia se encontra na divisa Norte-Sul\n", x, y);
				}	
				if (x==n && y>m){
					printf("(%i,%i) - Sua resid�ncia se encontra na divisa Norte-Sul\n", x, y);
				}
					//Verifica��o Leste-Oeste
				if (x<n && y==m){
					printf("(%i,%i) - Sua resid�ncia se encontra na divisa Leste-Oeste\n", x, y);
				}
				if (x>n && y==m){
					printf("(%i,%i) - Sua resid�ncia se encontra na divisa Leste-Oeste", x, y);
				}
			
		
		}
		
		//VERIFICA��O - 'x' e 'y' MAIOR que 'n' e 'm', ou seja, quadrante Nordeste
		
		if (x>n && y>m){
			printf("(%i,%i) - Sua resid�ncia se encontra na Terra M�dia Nordeste\n", x, y);
		
		}
		if (ok =='X');{
		printf("acabou por aqui!");
		}
	}

		
	return 0;
}
