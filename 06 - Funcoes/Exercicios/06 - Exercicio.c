#include <stdio.h>

int ConverteEmSegundos(int* horas, int* minutos, int* segundos)
{
	int totalsegundos;

	totalsegundos = ((*horas) * 3600) + ((*minutos) * 60) + (*segundos);

	return totalsegundos;
}

int main()
{
	int horas, minutos, segundos, totalsegundos;

	printf("Horas: ");
	scanf("%d", &horas);

	printf("Minutos: ");
	scanf("%d", &minutos);

	printf("Segundos: ");
	scanf("%d", &segundos);

	totalsegundos = ConverteEmSegundos(&horas, &minutos, &segundos);

	printf("Total de segundos: %d", totalsegundos);

	return 0;
}
