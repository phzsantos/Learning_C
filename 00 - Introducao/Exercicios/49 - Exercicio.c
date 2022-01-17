#include <stdio.h>

int main()
{
	int inicio_horas, inicio_minutos, inicio_segundos, fim_horas, fim_minutos, fim_segundos, experimento, valor_base;

	printf("Digite as horas iniciais: ");
	scanf("%d", &inicio_horas);
	printf("Digite os minutos iniciais: ");
	scanf("%d", &inicio_minutos);
	printf("Digite os segundos iniciais: ");
	scanf("%d", &inicio_segundos);
	printf("Digite o tempo do experimento em segundos: ");
	scanf("%d", &experimento);

	valor_base = (inicio_horas * 3600) + (inicio_minutos * 60) + inicio_segundos + experimento;

	fim_horas = valor_base / 3600;
	fim_minutos = (valor_base % 3600) / 60;
	fim_segundos = (valor_base % 3600) % 60;

	printf("Convertido: \nHoras: %d, minutos: %d, segundos: %d", fim_horas, fim_minutos, fim_segundos);

	return 0;
}
