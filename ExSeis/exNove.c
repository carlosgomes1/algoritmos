#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float b, h, res;
	
	printf("\nDigite o valor da base do triangulo: ");
	scanf("%f", &b);
	
	printf("\nDigite o valor da altura do triangulo: ");
	scanf("%f", &h);
	
	res = b * h / 2;
	
	printf("\nA area do triangulo é: %fcm/²\n", res);
	
	system("PAUSE");
	
	return 0;
}
