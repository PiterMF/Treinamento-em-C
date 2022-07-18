#include <stdio.h>
#include <locale.h>

int main(){
	//Algorítmo 3
	setlocale (LC_ALL, "portuguese");
	
	int eql=0, c=0, x, y;
	
	while(c<30){
		
		printf("Digite o valor de x: ");
		scanf("%d", &x);//pede o valor de x
		printf("Agora digite o valor de y: ");
		scanf("%d", &y);//pede o valor de y
		c++;
		
		if(x==y){
			eql++;//Se x e y forem iguais, aumenta o contador de equidade (eql)
		}
		
	}if(eql!=0){//Se o contador de equidade for diferente de zero, houveram vezes em que x e y foram iguais.
		printf("Os valores de x e y foram iguais %d vezes", eql);
	}else{	//Se o contador de equidade for igual a zero, x e y NÃO foram iguais.
		printf("Os valores de x e y não foram iguais");
	}
	


return 0;
}

