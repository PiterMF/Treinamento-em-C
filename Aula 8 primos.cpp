#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");

	int i, flag, n;
	int x=200, y=900;// quero saber todos os primos entre 200 e 500.
	/*printf("Digite o n�mero para verificar se � primo:\n");
	scanf("%d", &n);*/

	for(n=x; n<=y; n++){ //repete o intervalo de x a y
		flag=0;
		for (i=2; i<(n-1); i++){
			if (n%i == 0){ //verifica se n � divis�vel por algum n�mero entre 2 e n-1
				flag=1;// se entrar � divis�vel, ou seja, n�o � primo
				break;// sai desse for interno
			}
		}
		if (flag==0){//se o flag se mant�m com zero, significa que n�o mudou, que n n�o divide ngm no intervalo
			printf("%d\t", n);
		}
		
	
	}
	
	



return 0;
}

