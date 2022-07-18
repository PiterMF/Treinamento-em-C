#include <stdio.h>
#include <locale.h>

int main(){
	//Algorítmo 4
	setlocale (LC_ALL, "portuguese");

	int x=1, y=10, z;
	y = x++;//y deixa de valer 10, para valer x+1= 2, pois x = 1, porém o y troca de valor com x e logo x=2 e y=1, pois y implementa o valor de x (y=x) e depois acrescenta 1 ao x.
	z = y--;//z vira o novo valor de y (1) e logo após decrescce o y em 1 fazendo z= 1 e y = 1-1 = 0.
	x = y*z;//x deixa de valer 2 e vira 0 pois o novo z*y = 1*0 = 0.
	
	if(x>z){//x não é maior que z, pois x=0 e z=1 agora.
		y = 2;//Logo não entra aqui
	}else{
		z= y--;//z deixa de valer 1 para virar o novo y = 0. logo em seguida ele reduz o y em 1 fazendo y = 0-1 = -1
		x= z++;//x deixa de valer 0 para virar z = -1, logo x= -1 e depois incrementa z em 1 fazendo z= 0 +1 = 1;
	}//Isso não aconteceria se o ++ ou o -- viessem antes do novo valor ex: z= --y seria o z = y-1 e y = y-1.
	printf("%%%d, %d, %d%%", x, y, z);//%% faz com que apenas 1 "%" apareça. Além disso x = 0; y = -1; z = 1


return 0;
}

