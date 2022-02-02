#include <stdio.h>

int main()
{
	int horas_inicio, minutos_inicio, horas_fim, minutos_fim, horas, minutos;
	double valor;

	printf("Horas inicio: ");
	scanf("%d", &horas_inicio);
	printf("Minutos inicio: ");
	scanf("%d", &minutos_inicio);
	printf("Horas fim: ");
	scanf("%d", &horas_fim);
	printf("Minutos fim: ");
	scanf("%d", &minutos_fim);

	if (horas_fim < horas_inicio || (horas_inicio == horas_fim && minutos_inicio > minutos_fim))
	{
		horas = (24 - horas_inicio) + horas_fim;
	}
	else
	{
		horas = horas_fim - horas_inicio;
	}

	minutos = minutos_inicio + minutos_fim;
	while (minutos > 0)
	{
		horas++;
		minutos = minutos - 60;
	}

	if (horas <= 2)
	{
		valor = horas * 1.0;
	}
	else if (horas <= 4)
	{
		valor = horas * 1.4;
	}
	else
	{
		valor = horas * 2.0;
	}

	printf("Valor a pagar: %.2lf", valor);

	return 0;
}
