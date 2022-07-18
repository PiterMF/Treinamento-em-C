#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL, "portuguese");
	//4! = 4x3x2x1 = 1x2x3x4
	
	int i, fat=1, n;
	
	printf("Fatorial de qual número?\n");
	scanf("%d", &n);//pergunta pro usuário o fatorial.
	
	for (i=n; i>=1; i--){//i começa de n e reduz no máximo até 1 para não multiplicar por zero.
		fat = fat *i;
		printf("i=%d\n", i);
		printf("fat=%d\n", fat);
		printf("n=%d\n", n);
	}
	
	printf("\nFat (%d) = %d\n", n, fat);
	
	

return 0;
}

