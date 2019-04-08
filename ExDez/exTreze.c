#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, delta, x1, x2;
	
	printf("\nDigite o valor de A: ");
	scanf("%f", &a);
	
	printf("\nDigite o valor de B: ");
	scanf("%f", &b);
	
	printf("\nDigite o valor de C: ");
	scanf("%f", &c);
	
	delta = (b * b) - 4 * a * c;
	
	x1 = (- b - (sqrt(delta))) / (2 * a);
	x2 = (- b + (sqrt(delta))) / (2 * a);
	
	printf("\nX1 = %f \nX2 = %f" , x1, x2);
	
	system("PAUSE");
	return 0;
}
