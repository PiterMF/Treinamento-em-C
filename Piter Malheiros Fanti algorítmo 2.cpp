#include <stdio.h>
#include <locale.h>

int main(){
	//Algor�tmo 2
	setlocale (LC_ALL, "portuguese");

	int i, num, c15=0, menos15=0;
	

	for(i=1; i<=80; i++){//repete 80 vezes, pois h� 80 funcion�rios
		printf("Digite o n�mero de vezes que o funcion�rio usou o restaurante: ");
		scanf("%d", &num);//solicita ao usu�rio a informa��o pedida
		
		if(num>=15){
			c15++;//Acresce o contador caso o funcion�rio tenha usado 15 vezes ou mais
		}else{
			menos15++;//Acresce o contador caso o funcion�rio tenha usado menos de 15		}
	}
	printf("\nA empresa possui 80 funcion�rios");
	printf("\nO n�mero de funcion�rios que utilizou o restaurante 15 vezes ou mais no �ltimo m�s foi %d", c15);
	printf("\nO n�mero de funcion�rios que utilizou o restaurante menos de 15 vezes no �ltimo m�s foi %d", menos15);
	
	
}
return 0;
}


