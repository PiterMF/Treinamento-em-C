#include <stdio.h>
#include <math.h>

int main(){
	
	
	/* Exerc�cios AULA 2:
	
	4. Fa�a um algoritmo para apresentar o c�lculo da m�dia aritm�tica das seguintes notas:
8.0, 7.5, 4.5 e 9.
5. Construir um algoritmo que apresenta o c�lculo da �rea de um quadrado de 350m de lado.
6. Construir um algoritmo para imprimir o c�lculo da circunfer�ncia de um c�rculo com raio de 5
cm (p = 3,14159), dado que: p� = 2pr	 */
	
	// Ex 4:
	int area = pow(350,2);
	
	printf("4) Notas: 8.0 - 7.5 - 4.5 - 9.0\n\nA media aritimetica das notas eh: %.1f\n", (8.0 + 7.5 + 4.5 + 9.0) / 4 );
	printf("\n\n5) A area do quadrado de lado 350m eh: %d m2\n", area );
	printf("\n\n6) O perimetro da circunferencia de raio 5cm eh: %.5f cm\n", 2*3.14159*5);
	
	
	return 0;
}

