#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salario, vendas, comissao, salariofinal;
	
	printf("\nSalario fixo: R$");
	scanf("%f", &salario);
	
	printf("\nTotal em vendas: R$");
	scanf("%f", &vendas);
	
	comissao = (vendas / 100) * 4;
	
	salariofinal = comissao + salario;
	
	printf("\nSalario: R$%f \nComissao: R$%f \nSalario final: R$%f", salario, comissao, salariofinal);
		
	return 0;
}
