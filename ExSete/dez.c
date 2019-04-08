#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[5];
	float n1, n2, n3, n4, media;
	
	printf("\nNome do aluno: ");
	scanf("%s", &nome);
	
	printf("\nPrimeira nota: ");
	scanf("%f", &n1);
		
	printf("\nSegunda nota: ");
	scanf("%f", &n2);
		
	printf("\nTerceira nota: ");
	scanf("%f", &n3);
		
	printf("\nQuarta nota: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("\nA media do aluno %s e: %f\n", nome, media);
	
	system("PAUSE");
	
	return 0;
}
