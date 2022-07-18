#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	
		int a[10], b[10], c[20], cont=0, i;
		
		printf("Digite 10 números:\n");
		for (i=0; i<=9; i++){
			scanf("%d", &a[i]);
		}
		printf("Agora digite mais 10 números:\n");
		for(i=0;i<=9;i++){
			scanf("%d", &b[i]);
		}
		for(i=0;i<=9;i++){
		c[cont]= a[i];
		cont++;
		c[cont]=b[i];
		cont++;
		}
		
		
		for (i=0; i<=19; i++){
			printf("c[%d]=%d\n", i, c[i]);
		}


return 0;
}

