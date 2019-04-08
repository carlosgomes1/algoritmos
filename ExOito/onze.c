#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float medida, mm, dm, m;
	
	printf("\nMedida em centimetros: ");
	scanf("%f", &medida);
	
	mm = medida * 10;
	dm = medida / 10;
	m = medida / 100;
	
	printf("\nCM: %f", medida);
	printf("\nMM: %f", mm);
	printf("\nDM: %f", dm);
	printf("\nM: %f", m);		
	
	return 0;
}
