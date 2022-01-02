#include <stdio.h>

int main()
{
	double media,nota1, nota2;

	printf("Digite a primeira nota: ");
	scanf("%lf", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%lf", &nota2);

	media = (nota1 + nota2) / 2;

	printf("Sua media e: %.2lf", media);

	return 0;
}
