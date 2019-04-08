#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float celsius, kelvin;
	
	printf("\nDigite o valor em celsius: ");
	scanf("%f", &celsius);
	
	kelvin = celsius + 273.15;
	
	printf("\nO valor em kelvin e %f", kelvin);
	
	printf("\nTecle ENTER ou ESC para sair da DOS");
	
	system("PAUSE");
	
	return 0;
}
