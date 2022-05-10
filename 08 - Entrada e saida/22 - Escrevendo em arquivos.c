#include <stdio.h>

int main()
{
	FILE *arquivo;
	char fruta[10];

	arquivo = fopen("teste.txt", "a");

	if (arquivo)
	{
		do
		{
			fputs(fruta, arquivo);
			printf("Informe uma fruta ou 0 para sair: \n");
			fgets(fruta, 10, stdin);
		}
		while (fruta[0] != '0');
	}
	else
	{
		printf("Nao foi possivel criar o arquivo.");
	}

	fclose(arquivo);

	return 0;
}
