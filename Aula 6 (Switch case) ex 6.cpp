#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
char turno;
printf("Ol�, estudante!\nInsira o per�odo em que voc� estuda:\n\nM - Matutino\nV - Vespertino\nN - Noturno\n");
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
		printf("Turno inv�lido.");
	break;
}


return 0;
}

