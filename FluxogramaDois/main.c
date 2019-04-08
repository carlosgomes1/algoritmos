#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, soma;
	
	printf("\nDigite os valores: ");
	scanf("%d %d", &a, &b);
	
	soma = a + b;
	
	printf("%d", soma);
	
	return 0;
}
