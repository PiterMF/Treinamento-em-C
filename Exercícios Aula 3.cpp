#include <stdio.h>
#include <locale.h>
#include <math.h> // necess�rio para usar pow(base, expoente) e sqrt(num)

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	/*float co, ca, hip;
	printf("Digite o Cateto Oposto e em seguida o Cateto Adjacente do Tri�ngulo Ret�ngulo:\n");
	scanf("%f""%f", &co,&ca);
	hip = sqrt((pow(co,2) + pow(ca,2)));
	printf("\nSua Hipotenusa �: %.2f\n", hip);*/
	
	/*float x1, x2, y1, y2, coef;
	printf("Insira respectivamente as coordenadas x e y para 2 pontos de uma reta R2.\nExemplo: X1; Y1; X2; Y2;\n");
	scanf("%f""%f""%f""%f", &x1, &y1, &x2, &y2);
	coef = (y2-y1)/(x2-x1);
	printf("\nO coeficiente angular da reta R2 �: %.2f\n", coef);*/
	
	/*float cel, far;
	printf("Insira a temperatura em graus Farenheit:\n");
	scanf("%f", &far);
	cel = (5.0/9.0)*(far-32.0); // se n�o colocar o ".0" ele n�o calcula pois interpreta n�o como float, mas como int 
	printf("\nA temperatura em graus Celsius �: %.2f\n", cel); */
	
	
	
	return 0;
}
