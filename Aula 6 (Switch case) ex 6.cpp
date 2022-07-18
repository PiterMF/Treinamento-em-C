#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
char turno;
printf("Olá, estudante!\nInsira o período em que você estuda:\n\nM - Matutino\nV - Vespertino\nN - Noturno\n");
scanf(" %c", &turno);

switch (turno){
	case 'm':
	case 'M':
		printf("Bom dia!");
	break;
	case 'v':
	case 'V':
		printf("Boa tarde!");
	break;
	case 'n':
	case 'N':
		printf("Boa noite!");
	break;
	default:
		printf("Turno inválido.");
	break;
}


return 0;
}

