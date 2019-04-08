#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float quadrado, a;
	
	printf("\nDigite o numero: ");
	scanf("%f", &a);
	
	quadrado = a * a;
	
	printf("%f", quadrado);	
	
	return 0;
}
