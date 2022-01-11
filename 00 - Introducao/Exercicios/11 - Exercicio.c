#include <stdio.h>

int main()
{
	int metros_segundo;
	double km_hora;

	printf("Velocidade em m/s que quer converter em km/h: ");
	scanf("%d", &metros_segundo);

	km_hora = metros_segundo * 3.6;

	printf("%d m/s em km/h: %.0lf", metros_segundo, km_hora);

	return 0;
}
