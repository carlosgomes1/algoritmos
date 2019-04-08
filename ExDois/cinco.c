#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int filhos, horasTrab;
	float valHora, valBruto, valLiquido;
	
	printf("\nQuantos filhos? ");
	scanf("%d", &filhos);
	
	printf("\nQuanto voce recebe por hora? R$");
	scanf("%f", &valHora);
	
	printf("\nQuantas horas trabalhadas no mes? ");
	scanf("%d", &horasTrab);
	
	valBruto = valHora * horasTrab;
	
	valLiquido = valBruto + (filhos * 300);
	
	printf("\nValor Bruto: R$%f \n Valor Líquido: R$%f\n", valBruto, valLiquido);
	
	system("PAUSE");
}
