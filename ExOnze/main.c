#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, volume;
	
	printf("\nDigite o valor do raio: ");
	scanf("%f", &r);
	
	volume = 4 * 3.14 * (r * r * r) / 3;
	
	printf("\nO volume eh: %f", volume);
	
	return 0;
}
