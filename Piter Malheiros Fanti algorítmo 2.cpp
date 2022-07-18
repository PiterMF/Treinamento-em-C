#include <stdio.h>
#include <locale.h>

int main(){
	//Algorítmo 2
	setlocale (LC_ALL, "portuguese");

	int i, num, c15=0, menos15=0;
	

	for(i=1; i<=80; i++){//repete 80 vezes, pois há 80 funcionários
		printf("Digite o número de vezes que o funcionário usou o restaurante: ");
		scanf("%d", &num);//solicita ao usuário a informação pedida
		
		if(num>=15){
			c15++;//Acresce o contador caso o funcionário tenha usado 15 vezes ou mais
		}else{
			menos15++;//Acresce o contador caso o funcionário tenha usado menos de 15		}
	}
	printf("\nA empresa possui 80 funcionários");
	printf("\nO número de funcionários que utilizou o restaurante 15 vezes ou mais no último mês foi %d", c15);
	printf("\nO número de funcionários que utilizou o restaurante menos de 15 vezes no último mês foi %d", menos15);
	
	
}
return 0;
}


