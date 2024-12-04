#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	char xnome[100]; 
	float nota[4], media;
	printf("\nPrograma que calcula a média de um aluno \n \n \n");
	printf("Digite o nome completo do aluno: \n");
	fflush(stdin);
	fgets(xnome,100,stdin);
	printf("\n \nDigite as notas de %s", xnome);
	printf("\n \nPrimeira Nota: ");
	scanf("%f",&nota[0]);
	printf("\nSegunda Nota: ");
	scanf("%f",&nota[1]);
	printf("\nTerceira Nota: ");
	scanf("%f",&nota[2]);
	printf("\nQuarta Nota: ");
	scanf("%f",&nota[3]);
	printf("\n");
	fflush(stdin);
	media = (nota[0]+nota[1]+nota[2]+nota[3])/4;
	printf("Com base nas notas fornecidas, a média do aluno %s é: %.1f \n \n ", xnome, media);
	system("pause");
	return 0;
	}
