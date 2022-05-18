#include <stdio.h>
#include <string.h>

void EscreveData(int* dia, int* mes, int* ano)
{
	char mes_extenso[10];

	switch (*mes)
	{
		case 1:
			strcpy(mes_extenso, "Janeiro");
			break;
		case 2:
			strcpy(mes_extenso, "Fevereiro");
			break;
		case 3:
			strcpy(mes_extenso, "Marco");
			break;
		case 4:
			strcpy(mes_extenso, "Abril");
			break;
		case 5:
			strcpy(mes_extenso, "Maio");
			break;
		case 6:
			strcpy(mes_extenso, "Junho");
			break;
		case 7:
			strcpy(mes_extenso, "Julho");
			break;
		case 8:
			strcpy(mes_extenso, "Agosto");
			break;
		case 9:
			strcpy(mes_extenso, "Setembro");
			break;
		case 10:
			strcpy(mes_extenso, "Outubro");
			break;
		case 11:
			strcpy(mes_extenso, "Novembro");
			break;
		case 12:
			strcpy(mes_extenso, "Dezembro");
			break;
	}

	printf("%d de %s de %d", *dia, mes_extenso, *ano);
}

int main()
{
	int dia, mes, ano;

	do
	{
		printf("Dia: ");
		scanf("%d", &dia);
	}
	while (dia < 1 || dia > 31);

	do
	{
		printf("Mes: ");
		scanf("%d", &mes);
	}
	while (mes < 1 || mes > 12);

	do
	{
		printf("Ano: ");
		scanf("%d", &ano);
	}
	while (ano < 0);

	EscreveData(&dia, &mes, &ano);

	return 0;
}
