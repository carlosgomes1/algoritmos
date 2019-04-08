#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float din, juros, saldo;
	
	printf("\nQuanto ha na poupanca? R$");
	scanf("%f", &din);
	
	printf("\nQual o juros ao mes? ");
	scanf("%f", &juros);
	
	saldo = (din / 100 * juros) + din;
	saldo = (saldo / 100 * juros) + saldo;
	saldo = (saldo / 100 * juros) + saldo;
	
	printf("\nO total apos 3 meses eh de: R$%f\n", saldo);
	
	system("PAUSE");
	
	return 0;
}

