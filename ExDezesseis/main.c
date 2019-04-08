#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, aa;
	
	printf("\nValor de A: ");
	scanf("%d", &a);
	
	printf("\nValor de B: ");
	scanf("%d", &b);	
	
	aa = a;
	a = b;
	b = aa;
	
	printf("\nValor de A agora: %d", a);
	printf("\nValor de B agora: %d", b);	
	
	
	
	return 0;
}
