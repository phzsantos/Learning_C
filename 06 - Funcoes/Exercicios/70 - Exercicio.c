#include <stdio.h>

struct racional
{
    int p, q;
};

void reduz(int* numerador, int* denominador)
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

int neg(int* numerador)
{
    int negativa;

    negativa = (*numerador) * -1;

    return negativa;
}

int sum(int* numerador, int* denominador)
{
    int soma;

    soma = (*numerador) + (*denominador);

    return soma;
}

int mult(int* numerador, int* denominador)
{
    int produto;

    produto = (*numerador) * (*denominador);

    return produto;
}

double div(int* numerador, int* denominador)
{
    double quociente;

    quociente = (double) (*numerador) / (*denominador);

    return quociente;
}

int main()
{
    int negativa, soma, produto;
    double quociente;
    struct racional racional;
    
    racional.p = 36;
    racional.q = 60;

    reduz(&racional.p, &racional.q);
    printf("Reduzida %d/%d\n", racional.p, racional.q);

    negativa = neg(&racional.p);
    printf("Negativa %d/%d\n", negativa, racional.q);

    soma = sum(&racional.p, &racional.q);
    printf("Soma %d\n", soma);

    produto = mult(&racional.p, &racional.q);
    printf("Produto %d\n", produto);

    quociente = div(&racional.p, &racional.q);
    printf("Quociente %.2lf\n", quociente);

    return 0;
}