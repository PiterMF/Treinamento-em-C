#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");

	int i, flag, n;
	int x=200, y=900;// quero saber todos os primos entre 200 e 500.
	/*printf("Digite o número para verificar se é primo:\n");
	scanf("%d", &n);*/

	for(n=x; n<=y; n++){ //repete o intervalo de x a y
		flag=0;
		for (i=2; i<(n-1); i++){
			if (n%i == 0){ //verifica se n é divisível por algum número entre 2 e n-1
				flag=1;// se entrar é divisível, ou seja, não é primo
				break;// sai desse for interno
			}
		}
		if (flag==0){//se o flag se mantém com zero, significa que não mudou, que n não divide ngm no intervalo
			printf("%d\t", n);
		}
		
	
	}
	
	



return 0;
}

