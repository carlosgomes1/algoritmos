#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int horas, minutos, velmedia;
	float tempo, dist, litros;
	
	printf("\nHoras: ");
	scanf("%d", &horas);
	
	printf("\nMinutos: ");
	scanf("%d", &minutos);
	
	printf("\nVelocidade media: ");
	scanf("%d", &velmedia);
	
	tempo = minutos / 600 * 10 + horas;
	dist = tempo * velmedia;
	litros = dist / 12;
	
	printf("\nVelocidade media: %dkm/h", velmedia);
	printf("\nTempo gasto: %f h", tempo);
	printf("\nDistancia: %fkm", dist);
	printf("\nLitros gastos na viagem: %fl", litros);
	
	return 0;
}
