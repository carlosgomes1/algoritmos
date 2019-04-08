#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float b, h, res;
	
	printf("\nDigite o valor da base do retangulo: ");
	scanf("%f", &b);
	
	printf("\nDigite o valor da altura do retangulo: ");
	scanf("%f", &h);
	
	res = b * h;
	
	printf("\nA area do retangulo é: %fcm/²\n", res);
	
	system("PAUSE");
	
	return 0;
}
