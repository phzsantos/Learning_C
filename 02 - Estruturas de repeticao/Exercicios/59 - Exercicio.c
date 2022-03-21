#include <stdio.h>

int main()
{
	int i, habitantes, codigo_consumidor, qtd_residencial, qtd_comercial, qtd_industrial;
	double kwh, consumo_mes, media_consumo, maior_consumo, menor_consumo, total_residencial, total_comercial, total_industrial, total_geral;

	maior_consumo = 0;
	menor_consumo = 10000000000000000000;
	qtd_residencial = 0;
	qtd_comercial = 0;
	qtd_industrial = 0;
	total_residencial = 0;
	total_comercial = 0;
	total_industrial = 0;
	total_geral = 0;

	printf("Habitantes: ");
	scanf("%d", &habitantes);
	printf("Kwh: ");
	scanf("%d", &kwh);

	for (i = 0; i < habitantes; i++)
	{
		printf("Consumo do mes: ");
		scanf("%lf", &consumo_mes);
		printf("1 - Residencial\n");
		printf("2 - Comercial\n");
		printf("3 - Industrial\n");
		printf("Codigo consumidor: ");
		scanf("%d", &codigo_consumidor);

		total_geral += consumo_mes;

		if (consumo_mes > maior_consumo)
		{
			maior_consumo = consumo_mes;
		}

		if (consumo_mes < menor_consumo)
		{
			menor_consumo = consumo_mes;
		}

		if (codigo_consumidor == 1)
		{
			qtd_residencial++;
			total_residencial += consumo_mes;
		}
		else if (codigo_consumidor == 2)
		{
			qtd_comercial++;
			total_comercial += consumo_mes;
		}
		else
		{
			qtd_industrial++;
			total_industrial += consumo_mes;
		}
	}

	media_consumo = total_geral / habitantes;

	printf("Maior consumo: %.2lf\n", maior_consumo);
	printf("Menor consumo: %.2lf\n", menor_consumo);
	printf("Media consumo: %.2lf\n", media_consumo);
	printf("Consumo total Residencial: %.2lf\n", total_residencial);
	printf("Consumo total Comercial: %.2lf\n", total_comercial);
	printf("Consumo total Industrial: %.2lf", total_industrial);

	return 0;
}
