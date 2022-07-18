#include <stdio.h>
#include <locale.h>

	int main (){
	setlocale(LC_ALL, "portuguese");
	//Declaração de variáveis
	
	int n, m, x, y, k, i;
	char ok;
	
	//Entrada
	
	printf("Olá, moradores da Terra Média!\n");
	printf("Quantas consultas serão feitas?\n");
	scanf("%i", &k);
	printf("Por favor, digite dois números inteiros:\n");
	scanf("%i %i", &n, &m);
	
	printf("\n00000000000000000000000000000000000000000000000000000\n\n");
	
	for (i=1;i<=k;i++){
		printf("Por favor, digite as coordenadas de sua residência:\n");
		scanf("%i %i", &x, &y);
	
		//VERIFICAÇÃO - 'x' OU 'y' menor que 'n' ou 'm', ou seja: quadrante noroeste, sudeste, sudoeste
	
		if (x<=n || y<=m){
			if (x<n && y<m){
				printf("(%i,%i) - Sua residência se encontra na Terra Média Sudoeste\n", x, y);
			} 
			if (x<n && y>m){
				printf("(%i,%i) - Sua residência se encontra na Terra Média Noroeste\n", x, y);
			}
			if (x>n && y<m){
				printf("(%i,%i) - Sua resdiência se encontra na Terra Média Sudeste\n", x, y);
			}
				//VERIFICAÇÃO - Divisa, ou seja, 'x' e/ou 'y' igual a 'n' E/OU 'm'
					
					//Verificação Norte-Sul
				if (x==n && y<m){
					printf("(%i,%i) - Sua residência se encontra na divisa Norte-Sul\n", x, y);
				}	
				if (x==n && y>m){
					printf("(%i,%i) - Sua residência se encontra na divisa Norte-Sul\n", x, y);
				}
					//Verificação Leste-Oeste
				if (x<n && y==m){
					printf("(%i,%i) - Sua residência se encontra na divisa Leste-Oeste\n", x, y);
				}
				if (x>n && y==m){
					printf("(%i,%i) - Sua residência se encontra na divisa Leste-Oeste", x, y);
				}
			
		
		}
		
		//VERIFICAÇÃO - 'x' e 'y' MAIOR que 'n' e 'm', ou seja, quadrante Nordeste
		
		if (x>n && y>m){
			printf("(%i,%i) - Sua residência se encontra na Terra Média Nordeste\n", x, y);
		
		}
		if (ok =='X');{
		printf("acabou por aqui!");
		}
	}

		
	return 0;
}
