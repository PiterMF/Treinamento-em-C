#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
	/*int v[30], i;
	for (i=0; i<30; i++){
		v[30]= i*i;
		printf("v[%d]%d\n", i, v[30]);
	}*/
	
	float a[10], spos=0, sneg=0;
	int i, cneg=0;
	
	printf("Digite 10 números:\n");
	for (i=0; i<=9; i++){
		scanf("%f", &a[i]);
		if(a[i]>=0){
			spos=spos+a[i];
		}else{
			sneg=sneg+a[i];
			cneg++;
		}
		
	}
	printf("Soma positiva = %.2f\nSoma negativa = %.2f\n", spos, sneg);
	printf("Haviam %d números negativos\n", cneg);
	for(i=0; i<10; i++){	
		printf("Vetor[%d]= %.1f\n", i, a[i]);
	}

return 0;
}

