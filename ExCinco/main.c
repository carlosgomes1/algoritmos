#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, n, res;
	
	printf("\nValor de X: ");
	scanf("%d", &x);
	
	printf("\nValor de N: ");
	scanf("%d", &n);
	
	res = pow(x * n, 2);
	
	printf("\n%d x %d ao quadrado = %d\n", x, n, res);
	
	system("PAUSE");
	
	return 0;
}
