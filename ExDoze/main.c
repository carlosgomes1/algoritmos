#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raio, altura, area, b1, b2, ret, res;
	
	printf("\nDigite o raio da lata? ");
	scanf("%f", &raio);
	
	printf("\nDigite a altura da lata: ");
	scanf("%f", &altura);
	
	b1 = 3.14 * (raio * raio);
	b2 = b1;
	ret = altura * (3.14 * (raio * 2));
	res = b1 + b2 + ret;
	
	printf("\n%f cm²", res);
	
	return 0;
}
