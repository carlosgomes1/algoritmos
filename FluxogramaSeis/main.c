#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altura, peso, imc;
	
	printf("\nDigite o peso: ");
	scanf("%f", &peso);
	
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nSeu imc e igual a %f", imc);
	printf("Tecle enter para sair da DOS");
		
	system("PAUSE");
	
	return 0;
}
