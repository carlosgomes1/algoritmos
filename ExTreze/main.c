#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float peso, emag, engord;
	
	printf("\nQuanto voce pesa? ");
	scanf("%f", &peso);
	
	emag = (peso / 100) * 80;
	engord = (peso / 100) * 115;
	
	printf("\nSe engordar 15%, vai a %fkg \nSe emagrecer 20%  vai a %fkg", engord, emag);
	
	
	
	return 0;
}
