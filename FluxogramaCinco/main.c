#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, m;
	
	printf("\nDigite o valor de A: ");
	scanf("%d", &a);
	
	printf("\nDigite o valor de B: ");
	scanf("%d", &b);
	
	m = (a + b) / 2;
	
	printf("A media entre os valores e %d", m);
	
	return 0;
}
