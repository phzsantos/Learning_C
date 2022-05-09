#include <stdio.h>

int main()
{
//	char c, nomes[100], *resultado;
	int num, resultado, soma;
	FILE *arquivo;

	arquivo = fopen("teste.txt", "r");

	if (arquivo)
	{
//		lendo caractere por caractere
//		while ((c = getc(arquivo)) != EOF)
//		{
//			printf("%c", c);
//		}

//		Lendo uma string inteira
//		while (!feof(arquivo))
//		{
//			resultado = fgets(nomes, 100, arquivo);
//			if (resultado)
//			{
//				printf("%s", nomes);
//			}
//		}

		soma = 0;
		while (!feof(arquivo))
		{
			resultado = fscanf(arquivo, "%d", &num);
			if (resultado == 1)
			{
				soma += num;
			}
		}

		printf("A soma dos numeros encontrados: %d", soma);
	}
	else
	{
		printf("Nao achei o arquivo.");
	}

	fclose(arquivo);

	return 0;
}
