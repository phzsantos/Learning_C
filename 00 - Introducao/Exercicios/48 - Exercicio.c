#include <stdio.h>

int main()
{
	int valor_base, horas, minutos, segundos;

	printf("Digite o valor base em segundos: ");
	scanf("%d", &valor_base);

	horas = valor_base / 3600;
	minutos = (valor_base % 3600) / 60;
	segundos = (valor_base % 3600) % 60;

	printf("Horas: %d, minutos: %d, segundos: %d", horas, minutos, segundos);

	return 0;
}
