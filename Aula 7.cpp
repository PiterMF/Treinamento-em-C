#include <stdio.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "portuguese");
char nome[50];
float n1, n2, media;
printf("Digite o nome do aluno: ");
scanf(" %s", &nome);
printf("Digite as duas notas do aluno:\n");
scanf("%f %f", &n1, &n2);
media = (n1+n2)/2;
printf("\nA média do aluno %s é = %.2f\n", nome, media);




return 0;
}

