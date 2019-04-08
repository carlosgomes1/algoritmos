#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ano, idade, cinq;
	
	printf("\nAno de nascimento: ");
	scanf("%d", &ano);
	
	idade = 2019 - ano;
	cinq = 2050 - ano;
	
	printf("\nVoce tem %d anos \n Voce tera %d anos em 2050! \n", idade, cinq);
	
	system("PAUSE");
	
	return 0;
}
