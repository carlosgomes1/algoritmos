#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, perimetro;
	
	printf("\nDigite o valor do lado: ");
	scanf("%f", &a);
	
	perimetro = 4 * a;
	
	printf("%f", perimetro);

	return 0;
}
