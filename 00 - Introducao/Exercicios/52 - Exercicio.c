#include <stdio.h>

int main()
{
	double valor_base, valor_premio, primeiro, segundo, terceiro,
	       porcentagem_primeiro, porcentagem_segundo, porcentagem_terceiro,
		   primeiro_recebe, segundo_recebe, terceiro_recebe;

	printf("Valor base da aposta: ");
	scanf("%lf", &valor_base);
	printf("Valor do premio: ");
	scanf("%lf", &valor_premio);

	printf("Valor do primeiro amigo: ");
	scanf("%lf", &primeiro);
	printf("Valor do segundo amigo: ");
	scanf("%lf", &segundo);
	printf("Valor do terceiro amigo: ");
	scanf("%lf", &terceiro);

	porcentagem_primeiro = (primeiro * 100) / valor_base;
	porcentagem_segundo = (segundo * 100) / valor_base;
	porcentagem_terceiro = (terceiro * 100) / valor_base;

	primeiro_recebe = valor_premio * porcentagem_primeiro / 100;
	segundo_recebe = valor_premio * porcentagem_segundo / 100;
	terceiro_recebe = valor_premio * porcentagem_terceiro / 100;

	printf("Primeiro recebe: %.2lf\n", primeiro_recebe);
	printf("Segundo recebe: %.2lf\n", segundo_recebe);
	printf("Terceiro recebe: %.2lf\n", terceiro_recebe);

	return 0;
}
