#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	int idade[5], i;
	float media=0;
	for (i=0; i<=4; i++){
		printf("Digite a idade:\n");
		scanf("%d", &idade [i]);
		media = media + idade[i];
	}
	media = media/5.0;
	printf("\nMédia das idades é = %.2f\n", media);


return 0;
}

