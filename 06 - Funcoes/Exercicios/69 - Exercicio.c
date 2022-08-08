#include <stdio.h>

void simplificar(int* numerador, int* denominador)
{
	int i, j, mdc, numerador_tmp, denominador_tmp, divisores[10];

	numerador_tmp = (*numerador);
	denominador_tmp = (*denominador);

	i = 2;
	j = 0;
	while (numerador_tmp != 1 && denominador_tmp != 1)
	{
		if (numerador_tmp % i == 0 && denominador_tmp % i == 0)
		{
			divisores[j] = i;
			j++;
			denominador_tmp /= i;
			numerador_tmp /= i;
		}
		else if (denominador_tmp % i == 0)
		{
			denominador_tmp /= i;
		}
		else if (numerador_tmp % i == 0)
		{
			numerador_tmp /= i;
		}
		else
		{
			i++;
		}
	}

	mdc = 1;
	for (i = 0; i < j; i++)
	{
		mdc *= divisores[i];
	}

	(*numerador) /= mdc;
	(*denominador) /= mdc;
}

void produto_fracoes(int* numerador, int* denominador, int* numerador2, int* denominador2, int* produto)
{
    *(produto) = (*numerador) * (*numerador2);
    *(produto+1) = (*denominador) * (*denominador2);
}

int subtracao_fracoes(int* numerador, int* denominador, int* numerador2, int* denominador2, int* subtracao)
{
    *(subtracao) = (*numerador) * (*denominador2) - (*numerador2) * (*denominador);
    *(subtracao+1) = (*denominador) * (*denominador2);
}

int soma_fracoes(int* numerador, int* denominador, int* numerador2, int* denominador2, int* soma)
{
    *(soma) = (*numerador) * (*denominador2) + (*numerador2) * (*denominador);
    *(soma+1) = (*denominador) * (*denominador2);
}

int main()
{
    int fracao1[2], fracao2[2], produto[2], soma[2], subtracao[2];

    printf("Numerador: ");
    scanf("%d", &fracao1[0]);
    printf("Denominador: ");
    scanf("%d", &fracao1[1]);

    printf("Numerador: ");
    scanf("%d", &fracao2[0]);
    printf("Denominador: ");
    scanf("%d", &fracao2[1]);

    simplificar(&fracao1[0], &fracao1[1]);
    simplificar(&fracao2[0], &fracao2[1]);
    printf("Fracao 1 simplificada: %d/%d\n", fracao1[0], fracao1[1]);
    printf("Fracao 2 simplificada: %d/%d\n", fracao2[0], fracao2[1]);

    produto_fracoes(&fracao1[0], &fracao1[1], &fracao2[0], &fracao2[1], &produto[0]);
    printf("Produto fracoes: %d/%d\n", produto[0], produto[1]);

    subtracao_fracoes(&fracao1[0], &fracao1[1], &fracao2[0], &fracao2[1], &subtracao[0]);
    printf("Subtracao fracoes: %d/%d\n", subtracao[0], subtracao[1]);

    soma_fracoes(&fracao1[0], &fracao1[1], &fracao2[0], &fracao2[1], &soma[0]);
    printf("Soma fracoes: %d/%d\n", soma[0], soma[1]);

    return 0;
}