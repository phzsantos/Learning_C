#include <stdio.h>

int main()
{
	double salario, parcela_emprestimo;

	printf("Digite o valor do salario: ");
	scanf("%lf", &salario);
	printf("Valor da parcela do emprestimo: ");
	scanf("%lf", &parcela_emprestimo);

	if ((salario * 20 / 100) > parcela_emprestimo)
	{
		printf("Emprestimo concedido.");
	}
	else
	{
		printf("Emprestimo nao concedido.");
	}

	return 0;
}
