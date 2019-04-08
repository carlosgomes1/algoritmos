#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, m, h;
	
	printf("\nValor em segundos: ");
	scanf("%d", &s);
	
	m = s / 60;
	h = m / 60;
	
	printf("\nSegundos: %d\n", s);
	printf("\nMinutos: %d\n", m);
	printf("\nHoras: %d\n", h);
	
	return 0;
}
